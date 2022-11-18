// Object: SunFlareComponentData
// ClassId: 1912
// RuntimeId: 3063
// TypeInfo: 0x0000000144EC1BC0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../WorldSim/LensFlareRenderMode.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../Core/Vec2.h"
#include "../Core/Vec4.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SunFlareComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec4 Element1SizeOccluderCurve; // 0x90
        Core::Vec4 Element1SizeScreenPosCurve; // 0xA0
        Core::Vec4 Element1AlphaOccluderCurve; // 0xB0
        Core::Vec4 Element1AlphaScreenPosCurve; // 0xC0
        Core::Vec4 Element1RotationDistCurve; // 0xD0
        Core::Vec4 Element2SizeOccluderCurve; // 0xE0
        Core::Vec4 Element2SizeScreenPosCurve; // 0xF0
        Core::Vec4 Element2AlphaOccluderCurve; // 0x100
        Core::Vec4 Element2AlphaScreenPosCurve; // 0x110
        Core::Vec4 Element2RotationDistCurve; // 0x120
        Core::Vec4 Element3SizeOccluderCurve; // 0x130
        Core::Vec4 Element3SizeScreenPosCurve; // 0x140
        Core::Vec4 Element3AlphaOccluderCurve; // 0x150
        Core::Vec4 Element3AlphaScreenPosCurve; // 0x160
        Core::Vec4 Element3RotationDistCurve; // 0x170
        Core::Vec4 Element4SizeOccluderCurve; // 0x180
        Core::Vec4 Element4SizeScreenPosCurve; // 0x190
        Core::Vec4 Element4AlphaOccluderCurve; // 0x1A0
        Core::Vec4 Element4AlphaScreenPosCurve; // 0x1B0
        Core::Vec4 Element4RotationDistCurve; // 0x1C0
        Core::Vec4 Element5SizeOccluderCurve; // 0x1D0
        Core::Vec4 Element5SizeScreenPosCurve; // 0x1E0
        Core::Vec4 Element5AlphaOccluderCurve; // 0x1F0
        Core::Vec4 Element5AlphaScreenPosCurve; // 0x200
        Core::Vec4 Element5RotationDistCurve; // 0x210
        Float32 OccluderSize; // 0x220
        WorldSim::LensFlareRenderMode RenderMode; // 0x224
        Float32 RotationX; // 0x228
        Float32 RotationY; // 0x22C
        RenderBase::SurfaceShaderBaseAsset Element1Shader; // 0x230
        Float32 Element1RayDistance; // 0x238
        Core::Vec2 Element1Size; // 0x23C
        Float32 Element1RotationLocal; // 0x244
        Float32 Element1RotationDistMultiplier; // 0x248
        char pad_0x24C[0x4];
        RenderBase::SurfaceShaderBaseAsset Element2Shader; // 0x250
        Float32 Element2RayDistance; // 0x258
        Core::Vec2 Element2Size; // 0x25C
        Float32 Element2RotationLocal; // 0x264
        Float32 Element2RotationDistMultiplier; // 0x268
        char pad_0x26C[0x4];
        RenderBase::SurfaceShaderBaseAsset Element3Shader; // 0x270
        Float32 Element3RayDistance; // 0x278
        Core::Vec2 Element3Size; // 0x27C
        Float32 Element3RotationLocal; // 0x284
        Float32 Element3RotationDistMultiplier; // 0x288
        char pad_0x28C[0x4];
        RenderBase::SurfaceShaderBaseAsset Element4Shader; // 0x290
        Float32 Element4RayDistance; // 0x298
        Core::Vec2 Element4Size; // 0x29C
        Float32 Element4RotationLocal; // 0x2A4
        Float32 Element4RotationDistMultiplier; // 0x2A8
        char pad_0x2AC[0x4];
        RenderBase::SurfaceShaderBaseAsset Element5Shader; // 0x2B0
        Float32 Element5RayDistance; // 0x2B8
        Core::Vec2 Element5Size; // 0x2BC
        Float32 Element5RotationLocal; // 0x2C4
        Float32 Element5RotationDistMultiplier; // 0x2C8
        Uint32 FieldFlagOverride0; // 0x2CC
        Uint32 FieldFlagOverride1; // 0x2D0
        Boolean Enable; // 0x2D4
        Boolean DebugDrawOccluder; // 0x2D5
        Boolean ScreenClip; // 0x2D6
        Boolean UseSunPosition; // 0x2D7
        Boolean Element1Enable; // 0x2D8
        Boolean Element1RotationAlignedToRay; // 0x2D9
        Boolean Element2Enable; // 0x2DA
        Boolean Element2RotationAlignedToRay; // 0x2DB
        Boolean Element3Enable; // 0x2DC
        Boolean Element3RotationAlignedToRay; // 0x2DD
        Boolean Element4Enable; // 0x2DE
        Boolean Element4RotationAlignedToRay; // 0x2DF
        Boolean Element5Enable; // 0x2E0
        Boolean Element5RotationAlignedToRay; // 0x2E1
        Uint8 FieldFlagOverride2; // 0x2E2
        char pad_0x2E3[0xD];
    }; // 0x2F0
    static_assert(sizeof(SunFlareComponentData) == 0x2F0);
}
#pragma pack(pop)