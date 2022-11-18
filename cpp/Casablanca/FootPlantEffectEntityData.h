// Object: FootPlantEffectEntityData
// ClassId: 2763
// RuntimeId: 12893
// TypeInfo: 0x0000000144C1D280
#include "../Entity/EntityData.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../EffectBase/EffectParameter.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FootPlantEffectEntityData : public Entity::EntityData {
        Entity::MaterialDecl FootMaterialPair; // 0x20
        Float32 HeightOverGroundThreshold; // 0x24
        Float32 DistanceSquaredBetweenPlantsThreshold; // 0x28
        Float32 LodDistance; // 0x2C
        EffectBase::EffectParameter EmitterParam; // 0x30
        Boolean UseRayCast; // 0x38
        Boolean AutoEnable; // 0x39
        Boolean FootMustPointUpWhenPlanted; // 0x3A
        Boolean Active; // 0x3B
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(FootPlantEffectEntityData) == 0x40);
}
#pragma pack(pop)