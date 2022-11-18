// Object: TypeInfoFieldTypeRefValue
// ClassId: 5372
// RuntimeId: 12950
// TypeInfo: 0x0000000144BE8EF0
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/TypeRef.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldTypeRefValue : public Core::TypeInfoFieldValue {
        TypeRef Value; // 0x20
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldTypeRefValue) == 0x28);
}
#pragma pack(pop)