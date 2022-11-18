// Object: TerrainDynamicDecalEntityData
// ClassId: 3563
// RuntimeId: 40005
// TypeInfo: 0x0000000144E90260
#include "../Entity/EntityData.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 8)
namespace GameShared {
    class TerrainDynamicDecalEntityData : public Entity::EntityData {
        Entity::MaterialDecl PhysicsMaterial; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TerrainDynamicDecalEntityData) == 0x28);
}
#pragma pack(pop)