// Object: RoadData
// ClassId: 1662
// RuntimeId: 16956
// TypeInfo: 0x0000000144EAF4F0
#include "../TerrainBase/RibbonData.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class RoadData : public TerrainBase::RibbonData {
        RenderBase::SurfaceShaderBaseAsset Shader2d; // 0x58
        RenderBase::SurfaceShaderBaseAsset Shader2dMeshScatteringMask; // 0x60
        RenderBase::SurfaceShaderBaseAsset Shader3dZOnly; // 0x68
        RenderBase::SurfaceShaderBaseAsset Shader2dDisplacement; // 0x70
        Float32 UvTileFactor; // 0x78
        Boolean StickToTerrain; // 0x7C
        Boolean TangentSpaceEnable; // 0x7D
        Boolean ExportForMinimap; // 0x7E
        char pad_0x7F[0x1];
    }; // 0x80
    static_assert(sizeof(RoadData) == 0x80);
}
#pragma pack(pop)