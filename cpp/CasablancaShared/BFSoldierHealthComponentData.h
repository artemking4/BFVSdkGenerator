// Object: BFSoldierHealthComponentData
// ClassId: 1932
// RuntimeId: 20311
// TypeInfo: 0x0000000144CFBD50
#include "../SoldierShared/SoldierHealthComponentData.h"
#include "../GameShared/AimingConstraintsData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../SoldierShared/SoldierHealthModuleBinding.h"
#include "../CasablancaShared/CharacterStateHealthBinding.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFSoldierHealthComponentData : public SoldierShared::SoldierHealthComponentData {
        GameShared::AimingConstraintsData ManDownAimingConstraints; // 0xB0
        Int32 ManDownAimingConstraintsPriority; // 0xC0
        Float32 SpawnProtectionDuration; // 0xC4
        Array<Int32> SpawnProtectionDisabledInputs; // 0xC8
        Float32 SpawnProtectionEnabledEarlyTime; // 0xD0
        char pad_0xD4[0x4];
        Array<Int32> SpawnProtectionEnabledEarlyInputs; // 0xD8
        Float32 DisablePhysicsDelay; // 0xE0
        Float32 DamageOverTimeUpdateInterval; // 0xE4
        Float32 DamageMultiplier; // 0xE8
        Float32 ManDownAcceleratedBleedOutRate; // 0xEC
        Array<GameShared::UnlockAssetBase> IgnoreDamageTypesForHealing; // 0xF0
        Float32 ImmortalTimeWhenDowned; // 0xF8
        Float32 BleedOutRateMultiplierWhenActive; // 0xFC
        Float32 BleedOutRateMultiplierPerRevive; // 0x100
        Float32 DownedCooldownTime; // 0x104
        Float32 ConfirmedHealthChangedThreshold; // 0x108
        Float32 PauseHealOverTimeWhenHealedTime; // 0x10C
        Float32 TimeForCorpse; // 0x110
        Float32 ManDownStateTime; // 0x114
        Float32 ManDownStateHealthPoints; // 0x118
        Float32 KillCameraDelay; // 0x11C
        Float32 BledOutDelay; // 0x120
        Float32 ReviveQueryDelay; // 0x124
        Float32 ReviveQueryDuration; // 0x128
        Float32 ReviveQueryHealth; // 0x12C
        Float32 PostReviveResponseTime; // 0x130
        Float32 RegenerationDelay; // 0x134
        Float32 RegenerationRate; // 0x138
        Float32 RegenerationLimit; // 0x13C
        Float32 RegenerationAmount; // 0x140
        Float32 PostReviveRegenerationDelay; // 0x144
        Float32 PostReviveRegenerationRate; // 0x148
        Float32 PostReviveRegenerationTime; // 0x14C
        Float32 CriticalFakeImmortalTime; // 0x150
        Float32 SprintDisabledWhenDamagedTime; // 0x154
        Float32 SprintDisabledDamageThreshold; // 0x158
        Float32 DeadStateInvalidationThreshold; // 0x15C
        SoldierShared::SoldierHealthModuleBinding Binding; // 0x160
        char pad_0x3CC[0x4];
        CasablancaShared::CharacterStateHealthBinding CharacterStateBinding; // 0x3D0
        Boolean SkipManDownOnDying; // 0x428
        Boolean ForceManDownOnDead; // 0x429
        Boolean SpawnProtectionEnabled; // 0x42A
        Boolean SpawnProtectionHidesCharacter; // 0x42B
        Boolean UseExternalManDownTimer; // 0x42C
        Boolean AllowSquadSpawnSelection; // 0x42D
        Boolean SkipManDownWhenSquadWiped; // 0x42E
        Boolean UseAlternativeDownedState; // 0x42F
        Boolean AllowHealingToStack; // 0x430
        Boolean AllowKillCamera; // 0x431
        Boolean EnableDeadStateValidation; // 0x432
        char pad_0x433[0xD];
    }; // 0x440
    static_assert(sizeof(BFSoldierHealthComponentData) == 0x440);
}
#pragma pack(pop)