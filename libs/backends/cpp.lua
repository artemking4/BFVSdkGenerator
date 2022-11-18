local fs = require "fs"
local pathJoin = require "pathjoin".pathJoin
local data = require "data"

do
    print("Forming a C++ SDK into cpp/...")
    fs.mkdirSync("cpp")

    local function getHeaderPath(obj)
        return pathJoin(obj.info.module or "Global", obj.info.name) .. ".h"
    end

    local function getSDKPath(obj)
        return pathJoin("cpp", getHeaderPath(obj))
    end

    local function getArrayElementType(type)
        local ftn = data[type].info.typename
        if ftn == "Array" or ftn == "FixedArray" then 
            type = getArrayElementType(data[type].info.arrayTypeInfo)
        end

        return type
    end

    local function getDependencies(obj)
        local deps = { }
        
        local function insert(dep)
            for k,v in ipairs(deps) do
                if v == dep then return end
            end

            table.insert(deps, dep)
        end 

        if obj.superClass then 
            insert(obj.superClass)
        end

        for k,v in ipairs(obj.info.fields or { }) do
            insert(getArrayElementType(v.type))
        end

        return deps
    end

    local function getTypeName(type)
        local ftn = data[type].info.typename
        if ftn == "Array" or ftn == "FixedArray" then 
            return ("%s<%s>"):format(ftn, getTypeName(data[type].info.arrayTypeInfo))
        end

        if ftn == "Class" or ftn == "ValueType" or ftn == "Enum" then 
            return ("%s::%s"):format(data[type].info.module, data[type].info.name)
        end

        return data[type].info.name
    end

    ---@param class DumpTypeInfo
    local function populateFields(class)
        local fields = class.info.fields or { }

        table.sort(fields, function(f1, f2)
            return f1.offset < f2.offset
        end)

        local output = { }
        for i = 1, #fields + 1 do 
            local pf = fields[i - 1]
            local f = fields[i]
            local pe = 
                pf and (pf.offset + data:getTypeSize(pf.type)) 
                or (class.superClass and data[class.superClass].info.totalSize)
                or 0
            local ns = f and f.offset or class.info.totalSize

            if ns ~= pe then 
                table.insert(output, {
                    pad = true,
                    offset = pe,
                    size = ns - pe
                })
            end

            table.insert(output, f)
        end

        return output
    end
    
    ---@param obj DumpTypeInfo
    local function generateStructureHeader(obj)
        local lines = { }

        local function out(line, ...)
            table.insert(lines, line and line:format(...) or "")
        end

        out("// Object: %s", obj.info.name)
        if obj.info.typename == "Class" then 
            out("// ClassId: %s", obj.classId)
        end
        out("// RuntimeId: %s", obj.runtimeId)
        out("// TypeInfo: %s", obj.typeinfo)

        local hasIncludes = false
        for k,v in ipairs(getDependencies(obj)) do 
            hasIncludes = true
            out('#include "../%s"', getHeaderPath(data[v]))
        end
        if hasIncludes then
            out()
        end

        local type
        if obj.info.typename == "Class" then 
            type = "class"
        elseif obj.info.typename == "ValueType" then
            type = "struct"
        end

        if obj.info.alignment ~= 0 then
            out("#pragma pack(push, %d)", obj.info.alignment)
        end

        out("namespace %s {", obj.info.module)
        if not obj.superClass then
            out("    %s %s {", type, obj.info.name)
        else
            out("    %s %s : public %s {", type, obj.info.name, getTypeName(obj.superClass))
        end

        for k,v in ipairs(populateFields(obj)) do
            if v.pad then
                out("        char pad_0x%X[0x%X];", v.offset, v.size)
            else
                out("        %s %s; // 0x%X", getTypeName(v.type), v.name, v.offset)
            end
        end

        out("    }; // 0x%X", obj.info.totalSize)
        out("    static_assert(sizeof(%s) == 0x%X);", obj.info.name, obj.info.totalSize)
        out("}")

        if obj.info.alignment ~= 0 then
            out("#pragma pack(pop)")
        end

        return table.concat(lines, "\n")
    end

    ---@param obj DumpTypeInfo
    local function generateEnumHeader(obj)
        local lines = {
            ("// Object: %s"):format(obj.info.name),
            ("// RuntimeId: %s"):format(obj.runtimeId),
            ("// TypeInfo: %s"):format(obj.typeinfo),
            ""
        }

        local function out(line, ...)
            table.insert(lines, line and line:format(...) or "")
        end

        out("namespace %s {", obj.info.module)
        out("    enum %s {", obj.info.name)

        for k,v in ipairs(obj.info.fields) do
            out("        %s = %s%s", v.name, v.offset, (k == #obj.info.fields) and "" or ",")
        end

        out("    };")
        out("}")

        return table.concat(lines, "\n")
    end

    local function printVerbose(...)
        if args[3] == "verbose" then 
            print(...)
        end
    end

    local count = #data
    for k, obj in ipairs(data) do 
        local data
        if (obj.info.typename == "Class" or obj.info.typename == "ValueType") and not obj.info.name:find("::", 1, true) then
            printVerbose(("[%d/%d] Generating class/struct header %s..."):format(k, count, obj.info.name))
            data = generateStructureHeader(obj)
        elseif obj.info.typename == "Enum" then
            printVerbose(("[%d/%d] Generating enum header %s..."):format(k, count, obj.info.name))
            data = generateEnumHeader(obj)
        end

        if data then 
            fs.mkdirSync(pathJoin("cpp", obj.info.module))
            fs.writeFileSync(pathJoin("cpp", obj.info.module, obj.info.name) .. ".h", data)
        elseif obj.info.typename ~= "Array" then
            print(("[!!!] Warning: skipped %s as it is %s!"):format(obj.info.name, obj.info.typename))
        end
    end
end