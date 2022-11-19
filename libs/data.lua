local json = require "json"
local fs = require "fs"

---@alias DumpObjectRef integer

---@class DumpField
---@field name string
---@field flags integer
---@field offset integer
---@field type? DumpObjectRef

---@class DumpTypeInfo
---@field index integer
---@field typeinfo string
---@field flags integer
---@field runtimeId integer
---@field next? DumpObjectRef
---@field classId? integer
---@field defaultInstance? string
---@field lastSubClassId? integer
---@field nextSiblingClass? DumpObjectRef
---@field superClass? DumpObjectRef
---@field info DumpTypeInfoData
---@field totalFieldCount? integer

---@class DumpTypeInfoData
---@field flags integer
---@field name string
---@field type DumpObjectRef
---@field typename string
---@field alignment? integer
---@field fieldCount? integer
---@field module? string
---@field arrayTypeInfo? DumpObjectRef
---@field totalSize integer
---@field fields DumpField[]

---@alias DumpData DumpTypeInfo[]|table

---@type DumpData
local data = json.decode(fs.readFileSync("dump.json"))

function data:lookup(name)
    for k,v in ipairs(self) do 
        if v.info.name == name then 
            return k
        end
    end
end

function data:getTypeSize(typeid)
    local typename = self[typeid].info.typename
    if typename == "Class" or typename == "CString" then 
        return 8 -- pointer
    elseif typename == "ValueType" or typename == "Array" or typename == "FixedArray" then
        return self[typeid].info.totalSize
    elseif typename == "Enum" then 
        return 4
    elseif typename == "Boolean" then
        return 1
    elseif typename == "Uint8" or typename == "Int8" then 
        return 1
    elseif typename == "Uint16" or typename == "Int16" then
        return 2 
    elseif typename == "Uint32" or typename == "Int32" then 
        return 4
    elseif typename == "Uint64" or typename == "Int64" then 
        return 8
    elseif typename == "Float32" then 
        return 4
    elseif typename == "Float64" then 
        return 8
    elseif typename == "ResourceRef" or typename == "FileRef" or typename == "TypeRef" then 
        return 8 -- a pointer?
    elseif typename == "Function" then
        return 8 -- probs a ptr
    elseif typename == "DbObject" then
        return 16
    elseif typename == "BoxedValueRef" then
        return 16
    elseif typename == "String" then 
        return 32
    elseif typename == "Guid" then 
        return 16
    elseif typename == "SHA1" then 
        return 20
    end

    error("Unknown type, cant get size: " .. typename)
end

---@param obj DumpTypeInfo
function data:populateObjectFields(obj)
    local fields = obj.info.fields or { }

    table.sort(fields, function(f1, f2)
        return f1.offset < f2.offset
    end)

    local output = { }
    for i = 1, #fields + 1 do 
        local pf = fields[i - 1]
        local f = fields[i]
        local pe = 
            pf and (pf.offset + data:getTypeSize(pf.type)) 
            or (obj.superClass and data[obj.superClass].info.totalSize)
            or 0
        local ns = f and f.offset or obj.info.totalSize

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

function data:getArrayElementType(type)
    local ftn = data[type].info.typename
    if ftn == "Array" or ftn == "FixedArray" then 
        type = getArrayElementType(data[type].info.arrayTypeInfo)
    end

    return type
end

function data:getDependencies(obj)
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
        insert(data:getArrayElementType(v.type))
    end

    return deps
end

return data