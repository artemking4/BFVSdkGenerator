// Object: TypeInfoFieldGuidValue
// ClassId: 5363
// RuntimeId: 48058
// TypeInfo: 0x0000000144BE8FF0
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldGuidValue : public Core::TypeInfoFieldValue {
        Guid Value; // 0x20
    }; // 0x30
    static_assert(sizeof(TypeInfoFieldGuidValue) == 0x30);
}
#pragma pack(pop)