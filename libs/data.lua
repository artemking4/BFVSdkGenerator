local json = require "json"
local fs = require "fs"

---@alias DumpObjectRef integer

---@class DumpField
---@field name string
---@field flags integer
---@field offset integer
---@field type? DumpObjectRef

---@class DumpTypeInfo
---@field id integer
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

function data:findByName(name)
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

return data