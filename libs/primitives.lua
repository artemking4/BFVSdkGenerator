local data = require "data"

local function createEmptyType(name, size)
    return {
        index = data:lookup(name),
        info = {
            alignment = 0,
            arrayTypeInfo = data[data:lookup(name)].info.arrayTypeInfo,
            module = "Globals",
            name = name,
            totalSize = size,
            type = 2,
            typename = "Class"
        }
    }
end

return {
    Guid = createEmptyType("Guid", 0x10),
    SHA1 = createEmptyType("SHA1", 20),
    BoxedValueRef = createEmptyType("BoxedValueRef", 0x10),
    DbObject = createEmptyType("DbObject", 0x10),
    TypeRef = createEmptyType("TypeRef", 8),
    FileRef = createEmptyType("FileRef", 8),
    String = createEmptyType("String", 0x20),
    ResourceRef = createEmptyType("ResourceRef", 8)
}