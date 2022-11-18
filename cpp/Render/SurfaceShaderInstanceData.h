// Object: SurfaceShaderInstanceData
// ClassId: 4953
// RuntimeId: 15229
// TypeInfo: 0x0000000144F1C400
#include "../Core/DataContainer.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"

#pragma pack(push, 8)
namespace Render {
    class SurfaceShaderInstanceData : public Core::DataContainer {
        RenderBase::SurfaceShaderBaseAsset Shader; // 0x18
    }; // 0x20
    static_assert(sizeof(SurfaceShaderInstanceData) == 0x20);
}
#pragma pack(pop)