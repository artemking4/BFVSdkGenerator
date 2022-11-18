// Object: SupplySphereProjectileEntityData
// ClassId: 3321
// RuntimeId: 4950
// TypeInfo: 0x0000000144F437B0
#include "../SoldierShared/ExplosionPackEntityData.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/SupplyData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SupplySphereProjectileEntityData : public SoldierShared::ExplosionPackEntityData {
        SoldierShared::SupplyData SupplyData; // 0x200
        Float32 HealInstantRefillOverride; // 0x230
        Float32 HealSupplyPointsCapacityOverride; // 0x234
        Float32 AmmoInstantRefillOverride; // 0x238
        Float32 AmmoSupplyPointsCapacityOverride; // 0x23C
        Float32 DelayBetweenSuppliesOverride; // 0x240
        Boolean ForceUnspawnIfTargeted; // 0x244
        Boolean OnlyRenderForTeamAllowedToInteract; // 0x245
        Boolean IsAmmo; // 0x246
        Boolean IsHealth; // 0x247
        Boolean TriggerOnInteractPerPlayer; // 0x248
        char pad_0x249[0x7];
    }; // 0x250
    static_assert(sizeof(SupplySphereProjectileEntityData) == 0x250);
}
#pragma pack(pop)