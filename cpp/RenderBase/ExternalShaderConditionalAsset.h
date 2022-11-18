// Object: ExternalShaderConditionalAsset
// ClassId: 494
// RuntimeId: 52694
// TypeInfo: 0x0000000144F24210
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace RenderBase {
    class ExternalShaderConditionalAsset : public Core::Asset {
        CString ConditionName; // 0x20
        CString Description; // 0x28
        Array<CString> Branches; // 0x30
        CString DefaultValue; // 0x38
        Boolean IsGlobal; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(ExternalShaderConditionalAsset) == 0x48);
}
#pragma pack(pop)