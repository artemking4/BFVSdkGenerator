// Object: TypeInfoFieldRefValue
// ClassId: 5368
// RuntimeId: 33014
// TypeInfo: 0x0000000144BE8E70
#include "../Core/TypeInfoFieldValue.h"
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldRefValue : public Core::TypeInfoFieldValue {
        Core::DataContainer Value; // 0x20
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldRefValue) == 0x28);
}
#pragma pack(pop)