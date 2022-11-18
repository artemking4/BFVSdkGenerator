// Object: SunFlareEffectState
// ClassId: 4946
// RuntimeId: 63223
// TypeInfo: 0x0000000144EC0DC0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../Core/Vec2.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SunFlareEffectState : public Core::DataContainer {
        Float32 OccluderSize; // 0x18
        char pad_0x1C[0x4];
        RenderBase::SurfaceShaderBaseAsset Element1Shader; // 0x20
        char pad_0x28[0x8];
        Core::Vec4 Element1SizeOccluderCurve; // 0x30
        Core::Vec4 Element1SizeScreenPosCurve; // 0x40
        Core::Vec4 Element1AlphaOccluderCurve; // 0x50
        Core::Vec4 Element1AlphaScreenPosCurve; // 0x60
        Core::Vec4 Element2SizeOccluderCurve; // 0x70
        Core::Vec4 Element2SizeScreenPosCurve; // 0x80
        Core::Vec4 Element2AlphaOccluderCurve; // 0x90
        Core::Vec4 Element2AlphaScreenPosCurve; // 0xA0
        Core::Vec4 Element3SizeOccluderCurve; // 0xB0
        Core::Vec4 Element3SizeScreenPosCurve; // 0xC0
        Core::Vec4 Element3AlphaOccluderCurve; // 0xD0
        Core::Vec4 Element3AlphaScreenPosCurve; // 0xE0
        Core::Vec4 Element4SizeOccluderCurve; // 0xF0
        Core::Vec4 Element4SizeScreenPosCurve; // 0x100
        Core::Vec4 Element4AlphaOccluderCurve; // 0x110
        Core::Vec4 Element4AlphaScreenPosCurve; // 0x120
        Core::Vec4 Element5SizeOccluderCurve; // 0x130
        Core::Vec4 Element5SizeScreenPosCurve; // 0x140
        Core::Vec4 Element5AlphaOccluderCurve; // 0x150
        Core::Vec4 Element5AlphaScreenPosCurve; // 0x160
        Float32 Element1RayDistance; // 0x170
        Core::Vec2 Element1Size; // 0x174
        char pad_0x17C[0x4];
        RenderBase::SurfaceShaderBaseAsset Element2Shader; // 0x180
        Float32 Element2RayDistance; // 0x188
        Core::Vec2 Element2Size; // 0x18C
        char pad_0x194[0x4];
        RenderBase::SurfaceShaderBaseAsset Element3Shader; // 0x198
        Float32 Element3RayDistance; // 0x1A0
        Core::Vec2 Element3Size; // 0x1A4
        char pad_0x1AC[0x4];
        RenderBase::SurfaceShaderBaseAsset Element4Shader; // 0x1B0
        Float32 Element4RayDistance; // 0x1B8
        Core::Vec2 Element4Size; // 0x1BC
        char pad_0x1C4[0x4];
        RenderBase::SurfaceShaderBaseAsset Element5Shader; // 0x1C8
        Float32 Element5RayDistance; // 0x1D0
        Core::Vec2 Element5Size; // 0x1D4
        Boolean Enable; // 0x1DC
        Boolean DebugDrawOccluder; // 0x1DD
        Boolean Element1Enable; // 0x1DE
        Boolean Element2Enable; // 0x1DF
        Boolean Element3Enable; // 0x1E0
        Boolean Element4Enable; // 0x1E1
        Boolean Element5Enable; // 0x1E2
        char pad_0x1E3[0xD];
    }; // 0x1F0
    static_assert(sizeof(SunFlareEffectState) == 0x1F0);
}
#pragma pack(pop)