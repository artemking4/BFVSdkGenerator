// Object: NuiSpeechConfidencePlatformSetup
// ClassId: 598
// RuntimeId: 5932
// TypeInfo: 0x0000000144D294A0
#include "../Core/Asset.h"
#include "../CasablancaShared/NuiSpeechConfidencePlatformSetupEntry.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechConfidencePlatformSetup : public Core::Asset {
        CasablancaShared::NuiSpeechConfidencePlatformSetupEntry Entry; // 0x20
    }; // 0x28
    static_assert(sizeof(NuiSpeechConfidencePlatformSetup) == 0x28);
}
#pragma pack(pop)