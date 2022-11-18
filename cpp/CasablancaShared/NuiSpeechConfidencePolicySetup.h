// Object: NuiSpeechConfidencePolicySetup
// ClassId: 599
// RuntimeId: 31354
// TypeInfo: 0x0000000144D29620
#include "../Core/Asset.h"
#include "../CasablancaShared/NuiSpeechConfidencePlatformPolicy.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechConfidencePolicySetup : public Core::Asset {
        CasablancaShared::NuiSpeechConfidencePlatformPolicy CurrentPlatformPolicy; // 0x20
    }; // 0x28
    static_assert(sizeof(NuiSpeechConfidencePolicySetup) == 0x28);
}
#pragma pack(pop)