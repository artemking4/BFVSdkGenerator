// Object: BFUIPostProcessSettings
// ClassId: 307
// RuntimeId: 49983
// TypeInfo: 0x0000000144D86720
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Boolean.h"
#include "../RenderBase/BlurFilter.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPostProcessSettings : public Core::DataContainerPolicyAsset {
        RenderBase::BlurFilter BlurFilter; // 0x20
        char pad_0x24[0x4];
        RenderBase::SurfaceShaderBaseAsset Shader; // 0x28
        Boolean Enabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIPostProcessSettings) == 0x38);
}
#pragma pack(pop)