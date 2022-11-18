// Object: MeshMaterialVariation
// ClassId: 4282
// RuntimeId: 56643
// TypeInfo: 0x0000000144F1CF00
#include "../Core/DataContainer.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"

#pragma pack(push, 8)
namespace Render {
    class MeshMaterialVariation : public Core::DataContainer {
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0x18
    }; // 0x40
    static_assert(sizeof(MeshMaterialVariation) == 0x40);
}
#pragma pack(pop)