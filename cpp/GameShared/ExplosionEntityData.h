// Object: ExplosionEntityData
// ClassId: 3370
// RuntimeId: 3774
// TypeInfo: 0x0000000144E6D4D0
#include "../Entity/SpatialEntityData.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../WorldSim/MaskVolumeEntityData.h"
#include "../GameShared/DestructionMaskVolumeEntityData.h"
#include "../Entity/MaterialDecl.h"
#include "../GameShared/ExplosionWindForceData.h"
#include "../GameShared/DamageIndicationType.h"
#include "../Core/FloatCurve.h"
#include "../Core/FloatCurveAsset.h"

#pragma pack(push, 16)
namespace GameShared {
    class ExplosionEntityData : public Entity::SpatialEntityData {
        EffectBase::EffectBlueprint DetonationEffect; // 0x60
        EffectBase::EffectBlueprint DetonationEffectForFriendlies; // 0x68
        EffectBase::EffectBlueprint DetonationEffectWhenUnderWater; // 0x70
        Float32 UnderWaterDepthThreshold; // 0x78
        char pad_0x7C[0x4];
        WorldSim::MaskVolumeEntityData MaskVolume; // 0x80
        GameShared::DestructionMaskVolumeEntityData DestructionMaskVolume; // 0x88
        Entity::MaterialDecl MaterialPair; // 0x90
        Entity::MaterialDecl ShockwaveMaterialOverride; // 0x94
        Entity::MaterialDecl BlastMaterialOverride; // 0x98
        Entity::MaterialDecl SecondaryMaterialPair; // 0x9C
        GameShared::ExplosionWindForceData ShockwaveWindForce; // 0xA0
        GameShared::DamageIndicationType DamageIndicationType; // 0xA8
        Float32 EmpTime; // 0xAC
        Float32 MaxOcclusionRaycastRadius; // 0xB0
        char pad_0xB4[0x4];
        Core::FloatCurve BlastDamageFalloffCurve; // 0xB8
        Core::FloatCurveAsset BlastDamageFalloffCurveAsset; // 0xC0
        Float32 InnerBlastRadius; // 0xC8
        Float32 BlastDamage; // 0xCC
        Float32 BlastRadius; // 0xD0
        Float32 SecondaryMaterialRaycastLengthMultiplier; // 0xD4
        Float32 BlastImpulse; // 0xD8
        Float32 ShockwaveDamage; // 0xDC
        Float32 ShockwaveRadius; // 0xE0
        Float32 SecondaryMaterialRaycastMinLengthMultiplier; // 0xE4
        Float32 ShockwaveImpulse; // 0xE8
        Float32 ShockwaveTime; // 0xEC
        Float32 CameraShockwaveRadius; // 0xF0
        Float32 SpawnDelay; // 0xF4
        Boolean NoFriendliesEffectOnEnabledFriendlyFire; // 0xF8
        Boolean UseEntityTransformForDetonationEffect; // 0xF9
        Boolean OverrideShockwaveMaterial; // 0xFA
        Boolean OverrideBlastMaterial; // 0xFB
        Boolean SecondaryMaterialsActive; // 0xFC
        Boolean UseBlastDamageFalloffCurve; // 0xFD
        Boolean HasStunEffect; // 0xFE
        Boolean AllowDamageToOwner; // 0xFF
        Boolean IsTeamAgnostic; // 0x100
        Boolean ApplyBlastDamageToVehiclesAndCharactersInstantly; // 0x101
        Boolean ForceServersideAiDamage; // 0x102
        Boolean DisableOcclusion; // 0x103
        Boolean DisableStaticEntityOcclusion; // 0x104
        Boolean DisableOcclusionOutsideBlastRadius; // 0x105
        Boolean TriggerImpairedHearing; // 0x106
        Boolean Enabled; // 0x107
        char pad_0x108[0x8];
    }; // 0x110
    static_assert(sizeof(ExplosionEntityData) == 0x110);
}
#pragma pack(pop)