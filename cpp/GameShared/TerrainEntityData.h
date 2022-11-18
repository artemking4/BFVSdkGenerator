// Object: TerrainEntityData
// ClassId: 3333
// RuntimeId: 30797
// TypeInfo: 0x0000000144E901E0
#include "../Physics/GamePhysicsEntityData.h"
#include "../TerrainBase/TerrainData.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Boolean.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 16)
namespace GameShared {
    class TerrainEntityData : public Physics::GamePhysicsEntityData {
        ResourceRef DecalsResource; // 0xA0
        TerrainBase::TerrainData TerrainAsset; // 0xA8
        Entity::MaterialDecl WaterMaterial; // 0xB0
        Boolean Visible; // 0xB4
        char pad_0xB5[0xB];
    }; // 0xC0
    static_assert(sizeof(TerrainEntityData) == 0xC0);
}
#pragma pack(pop)