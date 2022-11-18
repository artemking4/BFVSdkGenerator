// Object: MaterialRelationTerrainDestructionData
// ClassId: 4276
// RuntimeId: 27160
// TypeInfo: 0x0000000144E9F740
#include "../Entity/PhysicsPropertyRelationPropertyData.h"
#include "../TerrainBase/TerrainDynamicDecalTemplateData.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialRelationTerrainDestructionData : public Entity::PhysicsPropertyRelationPropertyData {
        TerrainBase::TerrainDynamicDecalTemplateData DynamicDecalTemplate; // 0x20
    }; // 0x28
    static_assert(sizeof(MaterialRelationTerrainDestructionData) == 0x28);
}
#pragma pack(pop)