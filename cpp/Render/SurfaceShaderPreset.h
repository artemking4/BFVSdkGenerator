// Object: SurfaceShaderPreset
// ClassId: 779
// RuntimeId: 39240
// TypeInfo: 0x0000000144F1C380
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"

#pragma pack(push, 8)
namespace Render {
    class SurfaceShaderPreset : public RenderBase::SurfaceShaderBaseAsset {
        RenderBase::SurfaceShaderInstanceDataStruct ShaderPreset; // 0x20
    }; // 0x48
    static_assert(sizeof(SurfaceShaderPreset) == 0x48);
}
#pragma pack(pop)