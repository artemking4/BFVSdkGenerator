// Object: SpatialPrefabReferenceObjectData
// ClassId: 3975
// RuntimeId: 31761
// TypeInfo: 0x0000000144ED78F0
#include "../Entity/SpatialReferenceObjectData.h"
#include "../Entity/BlueprintPersistenceSetting.h"

#pragma pack(push, 16)
namespace Entity {
    class SpatialPrefabReferenceObjectData : public Entity::SpatialReferenceObjectData {
        Entity::BlueprintPersistenceSetting PersistenceSetting; // 0xC0
        char pad_0xC4[0xC];
    }; // 0xD0
    static_assert(sizeof(SpatialPrefabReferenceObjectData) == 0xD0);
}
#pragma pack(pop)