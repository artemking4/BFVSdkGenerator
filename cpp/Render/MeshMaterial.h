// Object: MeshMaterial
// ClassId: 4281
// RuntimeId: 42577
// TypeInfo: 0x0000000144F1CF80
#include "../Core/DataContainer.h"
#include "../Render/SurfaceShaderInstanceData.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"
#include "../Global/Boolean.h"
#include "../Render/ShaderTessellationType.h"
#include "../Global/Float32.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Render {
    class MeshMaterial : public Core::DataContainer {
        Render::SurfaceShaderInstanceData ShaderInstance; // 0x18
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0x20
        Render::ShaderTessellationType TessellationType; // 0x48
        Float32 TessellationTriangleSize; // 0x4C
        Float32 TessellationMaxDistance; // 0x50
        Float32 BackFaceCullEpsilon; // 0x54
        Float32 ShapeFactor; // 0x58
        char pad_0x5C[0x4];
        RenderBase::TextureBaseAsset DisplacementMap; // 0x60
        Float32 DisplacementScale; // 0x68
        Float32 DisplacementBias; // 0x6C
        Uint32 DisplacementMapTexCoord; // 0x70
        Boolean CastShadow; // 0x74
        Boolean SmoothEdgeVertices; // 0x75
        Boolean DisplacementObjectScale; // 0x76
        char pad_0x77[0x1];
    }; // 0x78
    static_assert(sizeof(MeshMaterial) == 0x78);
}
#pragma pack(pop)