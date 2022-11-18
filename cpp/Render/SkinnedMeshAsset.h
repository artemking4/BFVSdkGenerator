// Object: SkinnedMeshAsset
// ClassId: 562
// RuntimeId: 58860
// TypeInfo: 0x0000000144F1D080
#include "../Render/MeshAsset.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Render/SkinnedProceduralAnimationData.h"

#pragma pack(push, 16)
namespace Render {
    class SkinnedMeshAsset : public Render::MeshAsset {
        Core::Vec3 BoundingBoxPositionOffset; // 0xB0
        Core::Vec3 BoundingBoxSizeOffset; // 0xC0
        Render::SkinnedProceduralAnimationData SkinnedProceduralAnimation; // 0xD0
        Boolean UseDeltaPoseComputation; // 0xF0
        char pad_0xF1[0xF];
    }; // 0x100
    static_assert(sizeof(SkinnedMeshAsset) == 0x100);
}
#pragma pack(pop)