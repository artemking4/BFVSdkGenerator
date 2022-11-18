// Object: TypeInfoFieldUint32Value
// ClassId: 5374
// RuntimeId: 16144
// TypeInfo: 0x0000000144BE92F0
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldUint32Value : public Core::TypeInfoFieldValue {
        Uint32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldUint32Value) == 0x28);
}
#pragma pack(pop)