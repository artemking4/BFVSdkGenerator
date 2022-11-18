// Object: InteractableGrenadeEntityData
// ClassId: 3324
// RuntimeId: 56186
// TypeInfo: 0x0000000144F43530
#include "../SoldierShared/GrenadeEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/GrenadeInteractionSetting.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class InteractableGrenadeEntityData : public SoldierShared::GrenadeEntityData {
        Core::Vec3 ForceToApplyOnThrow; // 0x1A0
        Float32 InteractionRadius; // 0x1B0
        SoldierShared::GrenadeInteractionSetting ActionOnInteract; // 0x1B4
        Float32 ThrowDelay; // 0x1B8
        Boolean CanInteractWithEnemyProjectiles; // 0x1BC
        Boolean CanInteractWithFriendlyProjectiles; // 0x1BD
        Boolean InteractionResetsAmmo; // 0x1BE
        Boolean CanOnlyInteractWithProjectileIfOutOfAmmo; // 0x1BF
        Boolean CanOnlyInteractWithProjectileAfterCollision; // 0x1C0
        char pad_0x1C1[0xF];
    }; // 0x1D0
    static_assert(sizeof(InteractableGrenadeEntityData) == 0x1D0);
}
#pragma pack(pop)