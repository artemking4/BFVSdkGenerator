// Object: MissileEntityData
// ClassId: 3325
// RuntimeId: 49649
// TypeInfo: 0x0000000144F7ADE0
#include "../WeaponShared/GhostedProjectileEntityData.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../GameShared/ExplosionEntityData.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../WeaponShared/WarnTarget.h"
#include "../WeaponShared/LockingControllerData.h"
#include "../WeaponShared/MissileLockableInfoData.h"
#include "../WeaponShared/MissileUnguidedData.h"
#include "../WeaponShared/NearTargetDetonationData.h"
#include "../Global/CString.h"
#include "../WeaponShared/MissileProcessRicochets.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class MissileEntityData : public WeaponShared::GhostedProjectileEntityData {
        EffectBase::EffectBlueprint EngineEffect; // 0x150
        GameShared::ExplosionEntityData DudExplosion; // 0x158
        Audio::SoundAsset FlyBySound; // 0x160
        Float32 EngineStrength; // 0x168
        Float32 MaxSpeed; // 0x16C
        Float32 EngineTimeToIgnition; // 0x170
        Float32 EngineTimeToLive; // 0x174
        Float32 TimeToActivateGuidingSystem; // 0x178
        Float32 TimeToArm; // 0x17C
        Float32 MaxTurnAngle; // 0x180
        Float32 MinTurnAngle; // 0x184
        Float32 TurnAngleMultiplier; // 0x188
        Float32 Drag; // 0x18C
        Float32 Gravity; // 0x190
        Float32 FlyBySoundRadius; // 0x194
        Float32 FlyBySoundSpeed; // 0x198
        Float32 ImpactImpulse; // 0x19C
        Float32 Damage; // 0x1A0
        GameShared::TeamId DefaultTeam; // 0x1A4
        WeaponShared::WarnTarget WarnTarget; // 0x1A8
        char pad_0x1AC[0x4];
        WeaponShared::LockingControllerData LockingController; // 0x1B0
        WeaponShared::MissileLockableInfoData LockableInfo; // 0x1B8
        WeaponShared::MissileUnguidedData UnguidedData; // 0x1C0
        WeaponShared::NearTargetDetonationData NearTargetDetonation; // 0x1D4
        Float32 MaxBankAngle; // 0x1E4
        Float32 BankingSpeed; // 0x1E8
        char pad_0x1EC[0x4];
        CString Icon; // 0x1F0
        CString TargetIcon; // 0x1F8
        CString TargetIconEnemy; // 0x200
        Float32 MinGhostFrequency; // 0x208
        Float32 DepthUnderWater; // 0x20C
        Float32 MaxSpeedInWater; // 0x210
        WeaponShared::MissileProcessRicochets ProcessRicochets; // 0x214
        Float32 RicochetMinSpeed; // 0x218
        Float32 RicochetSpeedMultiplier; // 0x21C
        Float32 RicochetOutgoingSpeedThreshold; // 0x220
        Float32 RicochetMaterialHardnessThreshold; // 0x224
        Float32 RicochetAngleWeight; // 0x228
        Float32 CloseToGroundThreshold; // 0x22C
        Boolean ApplyGravityWhenUnguided; // 0x230
        Boolean WarnOnPointingMissile; // 0x231
        Boolean EnableBanking; // 0x232
        Boolean StartEffectsOnSpawn; // 0x233
        Boolean OnlyIgniteEngineUnderWater; // 0x234
        Boolean OnlyArmWhenUnderWater; // 0x235
        Boolean RegulateDepthUnderWater; // 0x236
        Boolean DetonateCloseToGround; // 0x237
        char pad_0x238[0x8];
    }; // 0x240
    static_assert(sizeof(MissileEntityData) == 0x240);
}
#pragma pack(pop)