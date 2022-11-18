// Object: MeshProjectileEntityData
// ClassId: 3316
// RuntimeId: 10220
// TypeInfo: 0x0000000144F7AFE0
#include "../WeaponShared/ProjectileEntityData.h"
#include "../Render/MeshAsset.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class MeshProjectileEntityData : public WeaponShared::ProjectileEntityData {
        Core::Vec3 InitialAngularVelocity; // 0xF0
        Render::MeshAsset Mesh; // 0x100
        EffectBase::EffectBlueprint TrailEffect; // 0x108
        EffectBase::EffectBlueprint TrailEffect1p; // 0x110
        EffectBase::EffectBlueprint TrailEffectForFriendlies; // 0x118
        Float32 InstantAttachableTestDistance; // 0x120
        Float32 InstantAttachableVisualConvergenceDelay; // 0x124
        Float32 InstantAttachableVisualConvergenceDuration; // 0x128
        Float32 MaxAttachableInclination; // 0x12C
        Float32 UnspawnAfterDetonationDelay; // 0x130
        Boolean IsAttachable; // 0x134
        Boolean InstantAttachableTestUnderReticule; // 0x135
        Boolean UprightAttachable; // 0x136
        Boolean ExtraDamping; // 0x137
        char pad_0x138[0x8];
    }; // 0x140
    static_assert(sizeof(MeshProjectileEntityData) == 0x140);
}
#pragma pack(pop)