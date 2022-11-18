// Object: TypeInfoFieldStringValue
// ClassId: 5370
// RuntimeId: 23319
// TypeInfo: 0x0000000144BE90F0
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldStringValue : public Core::TypeInfoFieldValue {
        CString Value; // 0x20
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldStringValue) == 0x28);
}
#pragma pack(pop)