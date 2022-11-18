// Object: TypeInfoFieldFloat64Value
// ClassId: 5362
// RuntimeId: 31118
// TypeInfo: 0x0000000144BE9170
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Float64.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldFloat64Value : public Core::TypeInfoFieldValue {
        Float64 Value; // 0x20
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldFloat64Value) == 0x28);
}
#pragma pack(pop)