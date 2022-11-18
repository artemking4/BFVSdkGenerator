// Object: DebrisClusterData
// ClassId: 3292
// RuntimeId: 48070
// TypeInfo: 0x0000000144DA4BA0
#include "../Entity/GameComponentEntityData.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Render/MeshAsset.h"
#include "../Debris/DebrisClusterPartInfoData.h"
#include "../Physics/PhysicsEntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Entity/SpatialEntityData.h"

#pragma pack(push, 16)
namespace Debris {
    class DebrisClusterData : public Entity::GameComponentEntityData {
        Core::Vec3 PushVelocityMul; // 0x90
        Core::Vec3 PushVelocityRndMul; // 0xA0
        Core::Vec3 InitRotationRndMul; // 0xB0
        Uint32 MaxActivePartsCount; // 0xC0
        Float32 CullDistanceScale; // 0xC4
        Float32 LightSamplingOffset; // 0xC8
        Float32 RuntimeClusterLifetime; // 0xCC
        Render::MeshAsset Mesh; // 0xD0
        Uint32 CompositePartCount; // 0xD8
        char pad_0xDC[0x4];
        Array<Debris::DebrisClusterPartInfoData> PartHierarchy; // 0xE0
        Physics::PhysicsEntityData PhysicsData; // 0xE8
        Float32 ActivationPushForceMul; // 0xF0
        Float32 ProjectileForceTransferMul; // 0xF4
        EffectBase::EffectBlueprint ActivationEffect; // 0xF8
        Float32 OnPartCollisionSpeedThreshold; // 0x100
        char pad_0x104[0x4];
        EffectBase::EffectBlueprint Effect; // 0x108
        Entity::SpatialEntityData Explosion; // 0x110
        Boolean PartialDestruction; // 0x118
        Boolean ActivateOnSpawn; // 0x119
        Boolean InEffectWorldOnly; // 0x11A
        Boolean NoCollision; // 0x11B
        Boolean IsActivationEffectDynamic; // 0x11C
        Boolean OnPartCollisionEnable; // 0x11D
        Boolean KillPartsOnCollision; // 0x11E
        Boolean DeactivatePartsOnSleep; // 0x11F
        Boolean SpawnExplosionOnFirstImpactOnly; // 0x120
        char pad_0x121[0xF];
    }; // 0x130
    static_assert(sizeof(DebrisClusterData) == 0x130);
}
#pragma pack(pop)