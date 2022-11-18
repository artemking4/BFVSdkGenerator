// Object: OccluderMeshEntityData
// ClassId: 3423
// RuntimeId: 16377
// TypeInfo: 0x0000000144EC20C0
#include "../Entity/SpatialEntityData.h"
#include "../RenderBase/MeshBaseAsset.h"

#pragma pack(push, 16)
namespace WorldSim {
    class OccluderMeshEntityData : public Entity::SpatialEntityData {
        RenderBase::MeshBaseAsset Mesh; // 0x60
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(OccluderMeshEntityData) == 0x70);
}
#pragma pack(pop)