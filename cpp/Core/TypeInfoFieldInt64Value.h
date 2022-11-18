// Object: TypeInfoFieldInt64Value
// ClassId: 5366
// RuntimeId: 34438
// TypeInfo: 0x0000000144BE9470
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Int64.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldInt64Value : public Core::TypeInfoFieldValue {
        Int64 Value; // 0x20
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldInt64Value) == 0x28);
}
#pragma pack(pop)