// Object: TypeInfoFieldCollection
// ClassId: 5356
// RuntimeId: 29374
// TypeInfo: 0x0000000144BE9A70
#include "../Core/DataContainer.h"
#include "../Core/TypeInfoFieldData.h"
#include "../Core/TypeInfoFieldValue.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldCollection : public Core::DataContainer {
        Array<Core::TypeInfoFieldData> Fields; // 0x18
        Array<Core::TypeInfoFieldValue> DefaultValues; // 0x20
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldCollection) == 0x28);
}
#pragma pack(pop)