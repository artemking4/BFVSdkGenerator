// Object: StaticModelEntityData
// ClassId: 3327
// RuntimeId: 51363
// TypeInfo: 0x0000000144E90760
#include "../Physics/GamePhysicsEntityData.h"
#include "../GameShared/PartLinkData.h"
#include "../Render/MeshAsset.h"
#include "../Global/Uint32.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../GameShared/PhysicsPartInfo.h"
#include "../GameShared/StaticModelNetworkInfo.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class StaticModelEntityData : public Physics::GamePhysicsEntityData {
        Array<GameShared::PartLinkData> PartLinks; // 0xA0
        Render::MeshAsset Mesh; // 0xA8
        Uint32 BoneCount; // 0xB0
        char pad_0xB4[0x4];
        Array<Core::LinearTransform> BasePoseTransforms; // 0xB8
        Array<GameShared::PhysicsPartInfo> PhysicsPartInfos; // 0xC0
        GameShared::StaticModelNetworkInfo NetworkInfo; // 0xC8
        Float32 LightMapWeight; // 0xE8
        Boolean ExcludeFromNearbyObjectDestruction; // 0xEC
        Boolean AnimatePhysics; // 0xED
        Boolean TerrainShaderNodesEnable; // 0xEE
        Boolean ExplosionPacksAttachable; // 0xEF
        Boolean TeleportPhysicsOnTransformChanges; // 0xF0
        Boolean Visible; // 0xF1
        Boolean OverlayEnabled; // 0xF2
        Boolean OutlineEdgeDetectEnable; // 0xF3
        Boolean ShouldPassThroughDamageBelowThreshold; // 0xF4
        char pad_0xF5[0xB];
    }; // 0x100
    static_assert(sizeof(StaticModelEntityData) == 0x100);
}
#pragma pack(pop)