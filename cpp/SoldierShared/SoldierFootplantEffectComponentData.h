// Object: SoldierFootplantEffectComponentData
// ClassId: 1840
// RuntimeId: 40338
// TypeInfo: 0x0000000144F39690
#include "../Entity/GameComponentData.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierFootplantEffectComponentData : public Entity::GameComponentData {
        Entity::MaterialDecl FootMaterialPair; // 0x80
        Float32 HeightOverGroundThreshold; // 0x84
        Float32 FootVelocityThreshold; // 0x88
        Float32 LodDistance; // 0x8C
        Boolean FullFootplantingEnabled; // 0x90
        char pad_0x91[0xF];
    }; // 0xA0
    static_assert(sizeof(SoldierFootplantEffectComponentData) == 0xA0);
}
#pragma pack(pop)