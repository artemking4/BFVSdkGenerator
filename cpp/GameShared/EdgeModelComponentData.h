// Object: EdgeModelComponentData
// ClassId: 1764
// RuntimeId: 34505
// TypeInfo: 0x0000000144E669C0
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Physics/RigidBodyData.h"
#include "../Render/RigidMeshAsset.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec4.h"
#include "../Global/Uint16.h"
#include "../WorldBase/EdgeModelConnectionInfo.h"

#pragma pack(push, 16)
namespace GameShared {
    class EdgeModelComponentData : public Entity::GameComponentData {
        Array<Physics::RigidBodyData> RigidBodies; // 0x80
        Array<Render::RigidMeshAsset> RigidMeshes; // 0x88
        Array<Core::LinearTransform> InstanceTransforms; // 0x90
        Array<Core::Vec4> LightMapUVs; // 0x98
        Array<Uint16> MeshInstanceRanges; // 0xA0
        Array<Uint16> ConnectionInstanceLookupTable; // 0xA8
        Array<WorldBase::EdgeModelConnectionInfo> Connections; // 0xB0
        Array<Uint16> PartConnectionRanges; // 0xB8
        Boolean AddToSpatialQueryManager; // 0xC0
        char pad_0xC1[0xF];
    }; // 0xD0
    static_assert(sizeof(EdgeModelComponentData) == 0xD0);
}
#pragma pack(pop)