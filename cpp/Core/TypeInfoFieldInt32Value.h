// Object: TypeInfoFieldInt32Value
// ClassId: 5365
// RuntimeId: 968
// TypeInfo: 0x0000000144BE94F0
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldInt32Value : public Core::TypeInfoFieldValue {
        Int32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldInt32Value) == 0x28);
}
#pragma pack(pop)