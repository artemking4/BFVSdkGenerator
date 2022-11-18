// Object: MeshProxyEntityData
// ClassId: 3413
// RuntimeId: 11513
// TypeInfo: 0x0000000144EC2040
#include "../Entity/SpatialEntityData.h"
#include "../RenderBase/MeshBaseAsset.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace WorldSim {
    class MeshProxyEntityData : public Entity::SpatialEntityData {
        RenderBase::MeshBaseAsset Mesh; // 0x60
        Array<Core::LinearTransform> BasePoseTransforms; // 0x68
        Array<Core::LinearTransform> BindPoseLocalTransforms; // 0x70
        Array<Core::LinearTransform> InverseBindPoseTransforms; // 0x78
    }; // 0x80
    static_assert(sizeof(MeshProxyEntityData) == 0x80);
}
#pragma pack(pop)