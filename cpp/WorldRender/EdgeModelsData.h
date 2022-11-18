// Object: EdgeModelsData
// ClassId: 1533
// RuntimeId: 48806
// TypeInfo: 0x0000000144EB9710
#include "../WorldBase/EdgeModelsBaseData.h"
#include "../Render/RigidMeshAsset.h"
#include "../Core/Vec4.h"

#pragma pack(push, 8)
namespace WorldRender {
    class EdgeModelsData : public WorldBase::EdgeModelsBaseData {
        Array<Render::RigidMeshAsset> RigidMeshes; // 0x40
        Array<Core::Vec4> LightMapUvs; // 0x48
    }; // 0x50
    static_assert(sizeof(EdgeModelsData) == 0x50);
}
#pragma pack(pop)