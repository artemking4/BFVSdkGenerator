// Object: TypeInfoFieldStructValue
// ClassId: 5371
// RuntimeId: 61241
// TypeInfo: 0x0000000144BE8DF0
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/BoxedValueRef.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldStructValue : public Core::TypeInfoFieldValue {
        BoxedValueRef Value; // 0x20
    }; // 0x30
    static_assert(sizeof(TypeInfoFieldStructValue) == 0x30);
}
#pragma pack(pop)