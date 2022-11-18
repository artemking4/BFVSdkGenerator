// Object: TerrainQuadDecalData
// ClassId: 1664
// RuntimeId: 32944
// TypeInfo: 0x0000000144EAF270
#include "../TerrainBase/VisualVectorShapeData.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../Global/Boolean.h"
#include "../Core/Vec4.h"
#include "../TerrainBase/TerrainQuadDecalAtlasTileTemplateData.h"
#include "../TerrainBase/TerrainQuadDecalAtlasTile.h"

#pragma pack(push, 16)
namespace TerrainBase {
    class TerrainQuadDecalData : public TerrainBase::VisualVectorShapeData {
        RenderBase::SurfaceShaderBaseAsset Shader2d; // 0x50
        char pad_0x58[0x8];
        Core::Vec4 UserMasks; // 0x60
        RenderBase::SurfaceShaderBaseAsset Shader2dMeshScatteringMask; // 0x70
        RenderBase::SurfaceShaderBaseAsset Shader3dZOnly; // 0x78
        RenderBase::SurfaceShaderBaseAsset Shader2dDisplacement; // 0x80
        TerrainBase::TerrainQuadDecalAtlasTileTemplateData AtlasTileTemplate; // 0x88
        TerrainBase::TerrainQuadDecalAtlasTile AtlasTile; // 0x90
        Boolean StickToTerrain; // 0xA4
        Boolean TangentSpaceEnable; // 0xA5
        char pad_0xA6[0xA];
    }; // 0xB0
    static_assert(sizeof(TerrainQuadDecalData) == 0xB0);
}
#pragma pack(pop)