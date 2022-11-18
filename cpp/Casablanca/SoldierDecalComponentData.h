// Object: SoldierDecalComponentData
// ClassId: 1838
// RuntimeId: 7293
// TypeInfo: 0x0000000144C7E400
#include "../Entity/GameComponentData.h"
#include "../DecalBase/DecalTemplateAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SoldierDecalComponentData : public Entity::GameComponentData {
        DecalBase::DecalTemplateAsset BulletHitDecal; // 0x80
        DecalBase::DecalTemplateAsset SplashDecal; // 0x88
        Float32 SplashRayLength; // 0x90
        char pad_0x94[0x4];
        DecalBase::DecalTemplateAsset PoolDecal; // 0x98
        Float32 PoolRayYOffset; // 0xA0
        Float32 PoolRayLength; // 0xA4
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(SoldierDecalComponentData) == 0xB0);
}
#pragma pack(pop)