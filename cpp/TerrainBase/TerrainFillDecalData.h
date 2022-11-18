// Object: TerrainFillDecalData
// ClassId: 1663
// RuntimeId: 42300
// TypeInfo: 0x0000000144EAF370
#include "../TerrainBase/VisualVectorShapeData.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class TerrainFillDecalData : public TerrainBase::VisualVectorShapeData {
        RenderBase::SurfaceShaderBaseAsset Shader2d; // 0x50
        RenderBase::SurfaceShaderBaseAsset Shader2dMeshScatteringMask; // 0x58
        RenderBase::SurfaceShaderBaseAsset Shader3dZOnly; // 0x60
    }; // 0x68
    static_assert(sizeof(TerrainFillDecalData) == 0x68);
}
#pragma pack(pop)