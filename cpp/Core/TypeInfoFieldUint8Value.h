// Object: TypeInfoFieldUint8Value
// ClassId: 5376
// RuntimeId: 32571
// TypeInfo: 0x0000000144BE93F0
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldUint8Value : public Core::TypeInfoFieldValue {
        Uint8 Value; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldUint8Value) == 0x28);
}
#pragma pack(pop)