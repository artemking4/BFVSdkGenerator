// Object: TypeInfoFieldUint16Value
// ClassId: 5373
// RuntimeId: 36514
// TypeInfo: 0x0000000144BE9370
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldUint16Value : public Core::TypeInfoFieldValue {
        Uint16 Value; // 0x20
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldUint16Value) == 0x28);
}
#pragma pack(pop)