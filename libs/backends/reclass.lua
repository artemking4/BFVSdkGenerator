local fs = require "fs"
local pathJoin = require "pathjoin".pathJoin
local data = require "data"
local primitives = require "primitives"

do
    print("Forming a ReClass.net project into Data.xml")
    
    local function generateUUID(type)
        math.randomseed(type)
        return ("%04x%04x-%04x-%04x-%04x-%04x%04x%04x"):format(
            math.random(0, 0xFFFF),
            math.random(0, 0xFFFF),

            math.random(0, 0xFFFF),

            math.random(0, 0xFFFF),

            math.random(0, 0xFFFF),

            math.random(0, 0xFFFF),
            math.random(0, 0xFFFF),
            math.random(0, 0xFFFF)
        )
    end

    local function formatNode(field, classInlined)
        local nodeTypes = {
            ["Int64"] = "Int64Node",
            ["Int32"] = "Int32Node",
            ["Int16"] = "Int16Node",
            ["Int8"] = "Int8Node",
            ["Uint64"] = "UInt64Node",
            ["Uint32"] = "UInt32Node",
            ["Uint16"] = "UInt16Node",
            ["Uint8"] = "UInt8Node",
            ["Float64"] = "DoubleNode",
            ["Float32"] = "FloatNode",
            ["Boolean"] = "BoolNode",
            ["CString"] = "Utf8TextPtrNode",
            ["Enum"] = "UInt32Node"
        }

        local t = data[field.type].info.typename
        if not classInlined and t == "Class" then 
            return ([[<node type="PointerNode" name="%s" comment="" hidden="false">
        <node type="ClassInstanceNode" name="object" comment="" hidden="false" reference="%s" />
      </node>]]):format(field.name, generateUUID(field.type))
        elseif (t == "Class" and classInlined) or t == "ValueType" or primitives[t] then
            return ('<node type="ClassInstanceNode" name="%s" comment="" hidden="false" reference="%s" />'):format(field.name, generateUUID(field.type))
        elseif t == "Array" then
            return ([[<node type="PointerNode" name="%s" comment="" hidden="false">
            <node type="ClassInstanceNode" name="object" comment="" hidden="false" reference="%s" />
          </node>]]):format(field.name, generateUUID(data[field.type].info.arrayTypeInfo))
        elseif nodeTypes[t] then 
            return ('<node type="%s" name="%s" comment="" hidden="false"/>'):format(nodeTypes[t], field.name)
        end

        error("Not found: " .. t)
    end

    ---@param obj DumpTypeInfo
    local function generateStructure(obj)
        local lines = { }

        local function out(line, ...)
            table.insert(lines, line and line:format(...) or "")
        end

        out('    <class uuid="%s" name="%s" comment="" address="%s">', generateUUID(obj.index + 1), obj.info.name, obj.defaultInstance and obj.defaultInstance:sub(3) or "140000000")
        
        if obj.superClass and obj.index + 1 ~= obj.superClass then 
            out("      %s", formatNode({
                name = "super",
                offset = 0,
                type = obj.superClass
            }, true))
        end

        for k,v in ipairs(data:populateObjectFields(obj)) do
            if v.pad then
                local size = v.size
                local offset = v.offset
                while size ~= 0 do 
                    local off = offset
                    local padType
                    if size >= 8 then 
                        padType = "Hex64Node"
                        size = size - 8
                        offset = offset + 8
                    elseif size >= 4 then 
                        padType = "Hex32Node"
                        size = size - 4
                        offset = offset + 4
                    elseif size >= 2 then 
                        padType = "Hex16Node"
                        size = size - 2
                        offset = offset + 2
                    elseif size >= 1 then 
                        padType = "Hex8Node"
                        size = size - 1
                        offset = offset + 1
                    end

                    out('      <node type="%s" name="N%08X" comment="" hidden="false" />', padType, off)
                end
            else
                out("      %s", formatNode(v))
            end
        end
        out("    </class>")

        return table.concat(lines, "\n")
    end

    local function printVerbose(...)
        if args[3] == "verbose" then 
            print(...)
        end
    end

    local lines = {
[[<?xml version="1.0" encoding="utf-8"?>
<!--ReClass.NET 1.2 by KN4CK3R-->
<!--Website: https://github.com/ReClassNET/ReClass.NET-->
<reclass version="65537" type="x64">
  <custom_data />
  <type_mapping>
    <TypeBool>bool</TypeBool>
    <TypeInt8>int8_t</TypeInt8>
    <TypeInt16>int16_t</TypeInt16>
    <TypeInt32>int32_t</TypeInt32>
    <TypeInt64>int64_t</TypeInt64>
    <TypeNInt>ptrdiff_t</TypeNInt>
    <TypeUInt8>uint8_t</TypeUInt8>
    <TypeUInt16>uint16_t</TypeUInt16>
    <TypeUInt32>uint32_t</TypeUInt32>
    <TypeUInt64>uint64_t</TypeUInt64>
    <TypeNUInt>size_t</TypeNUInt>
    <TypeFloat>float</TypeFloat>
    <TypeDouble>double</TypeDouble>
    <TypeVector2>Vector2</TypeVector2>
    <TypeVector3>Vector3</TypeVector3>
    <TypeVector4>Vector4</TypeVector4>
    <TypeMatrix3x3>Matrix3x3</TypeMatrix3x3>
    <TypeMatrix3x4>Matrix3x4</TypeMatrix3x4>
    <TypeMatrix4x4>Matrix4x4</TypeMatrix4x4>
    <TypeUtf8Text>char</TypeUtf8Text>
    <TypeUtf16Text>wchar_t</TypeUtf16Text>
    <TypeUtf32Text>char32_t</TypeUtf32Text>
    <TypeFunctionPtr>void*</TypeFunctionPtr>
  </type_mapping>
  <enums />]]
    }

    table.insert(lines, "  <classes>")
    for k,v in pairs(primitives) do 
        table.insert(lines, generateStructure(v))
    end

    local count = #data
    for k, obj in ipairs(data) do 
        local data
        if (obj.info.typename == "Class" or obj.info.typename == "ValueType") then
            printVerbose(("[%d/%d] Generating class/struct %s..."):format(k, count, obj.info.name))
            data = generateStructure(obj)
        end

        if data then
            table.insert(lines, data)
        elseif obj.info.typename ~= "Array" then
            print(("[!!!] Warning: skipped %s as it is %s!"):format(obj.info.name, obj.info.typename))
        end

        --if k == 10 then break end
    end


    table.insert(lines, "  </classes>")
    table.insert(lines, "</reclass>")

    fs.writeFileSync("Data.xml", table.concat(lines, "\n"))
end