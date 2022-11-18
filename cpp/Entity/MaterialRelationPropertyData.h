// Object: MaterialRelationPropertyData
// ClassId: 4249
// RuntimeId: 32782
// TypeInfo: 0x0000000144ED64A0
#include "../Core/DataContainer.h"
#include "../Entity/MaterialRelationMode.h"

#pragma pack(push, 8)
namespace Entity {
    class MaterialRelationPropertyData : public Core::DataContainer {
        Entity::MaterialRelationMode Mode; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(MaterialRelationPropertyData) == 0x20);
}
#pragma pack(pop)