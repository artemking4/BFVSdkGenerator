// Object: TypeInfoFieldUint64Value
// ClassId: 5375
// RuntimeId: 20761
// TypeInfo: 0x0000000144BE9270
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldUint64Value : public Core::TypeInfoFieldValue {
        Uint64 Value; // 0x20
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldUint64Value) == 0x28);
}
#pragma pack(pop)