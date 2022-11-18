// Object: TerrainDynamicDecalTemplateData
// ClassId: 797
// RuntimeId: 31441
// TypeInfo: 0x0000000144EAFAF0
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../TerrainBase/HeightfieldDecalAsset.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class TerrainDynamicDecalTemplateData : public Core::Asset {
        Float32 Width; // 0x20
        Float32 RelativeWidthDeviation; // 0x24
        Float32 Depth; // 0x28
        Float32 RelativeDepthDeviation; // 0x2C
        Float32 RotationRandomAmount; // 0x30
        Float32 SlopeMax; // 0x34
        TerrainBase::HeightfieldDecalAsset DepthMask; // 0x38
        RenderBase::SurfaceShaderInstanceDataStruct MaskShader; // 0x40
        RenderBase::SurfaceShaderInstanceDataStruct DisplacementShader; // 0x68
        Float32 DynamicMaskDecalWidthScale; // 0x90
        Float32 SlopeMinThreshold; // 0x94
        Float32 SlopeScalarMax; // 0x98
        Float32 SlopeMultiplier; // 0x9C
        Float32 MaxOpposingSlopes; // 0xA0
        Float32 MinWeightThreshold; // 0xA4
        Boolean TangentSpaceEnable; // 0xA8
        Boolean ScaleWithDestructionDepth; // 0xA9
        Boolean ForceUpScale; // 0xAA
        char pad_0xAB[0x5];
    }; // 0xB0
    static_assert(sizeof(TerrainDynamicDecalTemplateData) == 0xB0);
}
#pragma pack(pop)