// Object: VehicleProjectileEntityData
// ClassId: 3326
// RuntimeId: 61605
// TypeInfo: 0x0000000144D40350
#include "../WeaponShared/ProjectileEntityData.h"
#include "../GameShared/VehicleBlueprint.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class VehicleProjectileEntityData : public WeaponShared::ProjectileEntityData {
        GameShared::VehicleBlueprint Vehicle; // 0xF0
        Float32 EnterDelay; // 0xF8
        Float32 AlignWithGroundRayLength; // 0xFC
        Float32 NoVehicleCollisionTime; // 0x100
        Boolean AutoEnter; // 0x104
        Boolean AlignWithGround; // 0x105
        Boolean CheckGroundWhenSpawned; // 0x106
        Boolean DeployInsideNeutralCombatAreaOnly; // 0x107
        Boolean DestroyVehicleWhenSoldierRespawns; // 0x108
        char pad_0x109[0x7];
    }; // 0x110
    static_assert(sizeof(VehicleProjectileEntityData) == 0x110);
}
#pragma pack(pop)