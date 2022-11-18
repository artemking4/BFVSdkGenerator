// Object: GrenadeEntityData
// ClassId: 3322
// RuntimeId: 33063
// TypeInfo: 0x0000000144F43630
#include "../WeaponShared/GhostedProjectileEntityData.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../SoldierShared/ExplosionPackTrigger.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class GrenadeEntityData : public WeaponShared::GhostedProjectileEntityData {
        Float32 Gravity; // 0x150
        Float32 Drag; // 0x154
        Core::FloatCurve GravityCurve; // 0x158
        Core::FloatCurve DragCurve; // 0x160
        Float32 CollisionSpeedMultiplier; // 0x168
        Float32 MinBounceSpeed; // 0x16C
        Float32 CollisionDamage; // 0x170
        char pad_0x174[0x4];
        Core::FloatCurve CollisionDamageCurve; // 0x178
        CString HudIndicatorIcon; // 0x180
        Array<SoldierShared::ExplosionPackTrigger> ExplosionTriggers; // 0x188
        Float32 VehicleDetonationSampleInterval; // 0x190
        Float32 SoldierDetonationSampleInterval; // 0x194
        Boolean ShowHudIndicator; // 0x198
        Boolean CookFromWeapon; // 0x199
        Boolean CausesAiToEvade; // 0x19A
        Boolean SpottedByEnemyAsSoldier; // 0x19B
        Boolean CollideWithFriendlyCharacters; // 0x19C
        Boolean IsAttachableToVehicles; // 0x19D
        Boolean IsAttachableToCharacters; // 0x19E
        Boolean IsAttachableToWorld; // 0x19F
    }; // 0x1A0
    static_assert(sizeof(GrenadeEntityData) == 0x1A0);
}
#pragma pack(pop)