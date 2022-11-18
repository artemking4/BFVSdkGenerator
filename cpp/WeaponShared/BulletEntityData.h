// Object: BulletEntityData
// ClassId: 3317
// RuntimeId: 63787
// TypeInfo: 0x0000000144F7AEE0
#include "../WeaponShared/MeshProjectileEntityData.h"
#include "../Audio/SoundAsset.h"
#include "../GameShared/ExplosionEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/FloatCurve.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"
#include "../WeaponShared/BulletUnspawnOnCollision.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class BulletEntityData : public WeaponShared::MeshProjectileEntityData {
        Core::Vec3 AttachPositionOffset; // 0x140
        Audio::SoundAsset FlyBySound; // 0x150
        Audio::SoundAsset RicochetSound; // 0x158
        GameShared::ExplosionEntityData DudExplosion; // 0x160
        Float32 Gravity; // 0x168
        Float32 Drag; // 0x16C
        Float32 ImpactImpulse; // 0x170
        Float32 DetonationTimeVariation; // 0x174
        Float32 VehicleDetonationRadius; // 0x178
        Float32 VehicleDetonationActivationDelay; // 0x17C
        Float32 FlyBySoundRadius; // 0x180
        Float32 FlyBySoundSpeed; // 0x184
        Float32 Stamina; // 0x188
        Float32 DistributeDamageOverTime; // 0x18C
        Float32 StartDamage; // 0x190
        Float32 EndDamage; // 0x194
        Float32 DamageFalloffStartDistance; // 0x198
        Float32 DamageFalloffEndDistance; // 0x19C
        Core::FloatCurve DamageCurve; // 0x1A0
        Core::FloatCurve DamageOverTimeMultiplierCurve; // 0x1A8
        Float32 TimeToArmExplosion; // 0x1B0
        Float32 FirstFrameTravelDistance; // 0x1B4
        Int32 StopTrailEffectOnUnspawnFrameDelay; // 0x1B8
        Float32 AttachMinSpeed; // 0x1BC
        Float32 AttachMaterialMaxHardness; // 0x1C0
        WeaponShared::BulletUnspawnOnCollision BulletUnspawnOnCollision; // 0x1C4
        Float32 RicochetMinSpeed; // 0x1C8
        Float32 RicochetSpeedMultiplier; // 0x1CC
        Float32 RicochetOutgoingSpeedThreshold; // 0x1D0
        Float32 RicochetMaterialHardnessThreshold; // 0x1D4
        Float32 RicochetAngleWeight; // 0x1D8
        Entity::MaterialDecl RicochetMaterialPair; // 0x1DC
        Boolean VehicleDetonationUsesFriendlyFireRules; // 0x1E0
        Boolean HasVehicleDetonation; // 0x1E1
        Boolean InstantHit; // 0x1E2
        Boolean StopTrailEffectOnUnspawn; // 0x1E3
        Boolean OnlyAllowOnePassThroughCollisionEffectPerUpdate; // 0x1E4
        Boolean RicochetBulletSpawnExplosion; // 0x1E5
        char pad_0x1E6[0xA];
    }; // 0x1F0
    static_assert(sizeof(BulletEntityData) == 0x1F0);
}
#pragma pack(pop)