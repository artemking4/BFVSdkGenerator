// Object: ExplosionPackEntityData
// ClassId: 3319
// RuntimeId: 24685
// TypeInfo: 0x0000000144F43EB0
#include "../WeaponShared/GhostedProjectileEntityData.h"
#include "../SoldierShared/ExplosionPackTrigger.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../GameShared/UIWorldIconBehavior.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class ExplosionPackEntityData : public WeaponShared::GhostedProjectileEntityData {
        Core::LinearTransform ExplosionOffsetTransform; // 0x150
        Core::Vec3 ExplosionWorldOffset; // 0x190
        Core::Vec3 WorldIconOffset; // 0x1A0
        Array<SoldierShared::ExplosionPackTrigger> ExplosionPackTriggers; // 0x1B0
        Float32 VehicleDetonationSampleInterval; // 0x1B8
        Float32 SoldierDetonationSampleInterval; // 0x1BC
        Array<Guid> NonAttachableUnlockGuids; // 0x1C0
        Float32 GravityScale; // 0x1C8
        Float32 OnCollisionLinearVelocityDamping; // 0x1CC
        Float32 TimeToLiveOnPlayerDeath; // 0x1D0
        Float32 Health; // 0x1D4
        Float32 SpottedTime; // 0x1D8
        Float32 DefuseRadius; // 0x1DC
        CString IconName; // 0x1E0
        GameShared::UIWorldIconBehavior IconBehavior; // 0x1E8
        Float32 AlignWithGroundRayLength; // 0x1F0
        Boolean IsAttachableToVehicles; // 0x1F4
        Boolean IsAttachableToWorld; // 0x1F5
        Boolean IsDestructible; // 0x1F6
        Boolean ReceivesExplosionDamage; // 0x1F7
        Boolean ShowInSpectatorUI; // 0x1F8
        Boolean SpottedByEnemyAsSoldier; // 0x1F9
        Boolean AlignWithGround; // 0x1FA
        char pad_0x1FB[0x5];
    }; // 0x200
    static_assert(sizeof(ExplosionPackEntityData) == 0x200);
}
#pragma pack(pop)