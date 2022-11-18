// Object: TypeInfoAttribute
// ClassId: 5355
// RuntimeId: 65049
// TypeInfo: 0x0000000144BE9C70
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Core/TypeInfoAttributeArgument.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoAttribute : public Core::DataContainer {
        CString Name; // 0x18
        Array<Core::TypeInfoAttributeArgument> Arguments; // 0x20
        Boolean IsNative; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(TypeInfoAttribute) == 0x30);
}
#pragma pack(pop)