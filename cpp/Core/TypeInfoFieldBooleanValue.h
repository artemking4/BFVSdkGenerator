// Object: TypeInfoFieldBooleanValue
// ClassId: 5359
// RuntimeId: 22641
// TypeInfo: 0x0000000144BE9670
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldBooleanValue : public Core::TypeInfoFieldValue {
        Boolean Value; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldBooleanValue) == 0x28);
}
#pragma pack(pop)