// Object: ExternalShaderConditionalFilterAsset
// ClassId: 497
// RuntimeId: 15311
// TypeInfo: 0x0000000144F24090
#include "../Core/Asset.h"
#include "../RenderBase/ExternalShaderConditionalSelection.h"

#pragma pack(push, 8)
namespace RenderBase {
    class ExternalShaderConditionalFilterAsset : public Core::Asset {
        Array<RenderBase::ExternalShaderConditionalSelection> Inludees; // 0x20
    }; // 0x28
    static_assert(sizeof(ExternalShaderConditionalFilterAsset) == 0x28);
}
#pragma pack(pop)