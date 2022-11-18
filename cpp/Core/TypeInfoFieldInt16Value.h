// Object: TypeInfoFieldInt16Value
// ClassId: 5364
// RuntimeId: 51458
// TypeInfo: 0x0000000144BE9570
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Int16.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldInt16Value : public Core::TypeInfoFieldValue {
        Int16 Value; // 0x20
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldInt16Value) == 0x28);
}
#pragma pack(pop)