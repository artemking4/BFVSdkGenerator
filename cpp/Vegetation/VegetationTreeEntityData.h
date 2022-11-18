// Object: VegetationTreeEntityData
// ClassId: 3341
// RuntimeId: 32458
// TypeInfo: 0x0000000144EB4750
#include "../Vegetation/VegetationBaseEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Vegetation/VegetationEffectSlot.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Uint32.h"
#include "../Audio/SoundAsset.h"

#pragma pack(push, 16)
namespace Vegetation {
    class VegetationTreeEntityData : public Vegetation::VegetationBaseEntityData {
        Core::Vec3 InertiaModifier; // 0xF0
        Core::Vec3 TranslucencyVolumeCenter; // 0x100
        Float32 Stiffness; // 0x110
        Float32 Damping; // 0x114
        Float32 StemMass; // 0x118
        Float32 StiffnessSpread; // 0x11C
        Float32 DampingSpread; // 0x120
        Float32 MassSpread; // 0x124
        Float32 StemLockedUpTo; // 0x128
        Int32 StemBoneCount; // 0x12C
        Float32 BreakableJointThreshold; // 0x130
        Float32 BoundingBoxScaleFactor; // 0x134
        Float32 PartsTimeToLive; // 0x138
        Float32 LinearVelocityDamping; // 0x13C
        Float32 AngularVelocityDamping; // 0x140
        Float32 Friction; // 0x144
        Float32 Restitution; // 0x148
        Float32 StemPhysicsWidth; // 0x14C
        Float32 StemPhysicsHeightScale; // 0x150
        Float32 BranchPhysicsWidth; // 0x154
        Float32 BranchPhysicsHeightScale; // 0x158
        Float32 DestructionMassScale; // 0x15C
        Float32 CenterOfMassVerticalScale; // 0x160
        char pad_0x164[0x4];
        Vegetation::VegetationEffectSlot StemBreakEffect; // 0x168
        Vegetation::VegetationEffectSlot BranchBreakEffect; // 0x180
        Vegetation::VegetationEffectSlot ImpactEffect; // 0x198
        EffectBase::EffectBlueprint WindEffect; // 0x1B0
        Float32 MinRespawnTime; // 0x1B8
        Uint32 StemEffectNodeThreshold; // 0x1BC
        Uint32 ShadowLODOffset; // 0x1C0
        char pad_0x1C4[0x4];
        Audio::SoundAsset Sound; // 0x1C8
        Audio::SoundAsset WindSound; // 0x1D0
        Audio::SoundAsset RainSound; // 0x1D8
        Boolean ConstantFalloff; // 0x1E0
        Boolean Indestructable; // 0x1E1
        Boolean TranslucencyEnabled; // 0x1E2
        char pad_0x1E3[0xD];
    }; // 0x1F0
    static_assert(sizeof(VegetationTreeEntityData) == 0x1F0);
}
#pragma pack(pop)