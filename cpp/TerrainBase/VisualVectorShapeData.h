// Object: VisualVectorShapeData
// ClassId: 1658
// RuntimeId: 36791
// TypeInfo: 0x0000000144EAF5F0
#include "../Entity/VectorShapeData.h"
#include "../Global/Float32.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class VisualVectorShapeData : public Entity::VectorShapeData {
        Float32 ErrorTolerance; // 0x30
        char pad_0x34[0x4];
        RenderBase::SurfaceShaderBaseAsset Shader3d; // 0x38
        Uint32 DrawOrderIndex; // 0x40
        Float32 TessellationTriangleSize; // 0x44
        Boolean SplitToMatchHeightfield; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(VisualVectorShapeData) == 0x50);
}
#pragma pack(pop)