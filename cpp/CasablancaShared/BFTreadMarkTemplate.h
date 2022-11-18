// Object: BFTreadMarkTemplate
// ClassId: 161
// RuntimeId: 14239
// TypeInfo: 0x0000000144D30C20
#include "../Core/Asset.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFTreadMarkTemplate : public Core::Asset {
        RenderBase::SurfaceShaderInstanceDataStruct SurfaceShader; // 0x20
        RenderBase::SurfaceShaderInstanceDataStruct DisplacementShader; // 0x48
    }; // 0x70
    static_assert(sizeof(BFTreadMarkTemplate) == 0x70);
}
#pragma pack(pop)