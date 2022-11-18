// Object: NuiSpeechConfidencePlatformPolicy
// ClassId: 4357
// RuntimeId: 37278
// TypeInfo: 0x0000000144D295A0
#include "../Core/DataContainer.h"
#include "../Core/GamePlatform.h"
#include "../CasablancaShared/NuiSpeechConfidencePolicy.h"
#include "../CasablancaShared/NuiSpeechConfidenceDialectPolicy.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechConfidencePlatformPolicy : public Core::DataContainer {
        Core::GamePlatform Platform; // 0x18
        char pad_0x1C[0x4];
        CasablancaShared::NuiSpeechConfidencePolicy DefaultPolicy; // 0x20
        Array<CasablancaShared::NuiSpeechConfidenceDialectPolicy> DialectPolicies; // 0x28
    }; // 0x30
    static_assert(sizeof(NuiSpeechConfidencePlatformPolicy) == 0x30);
}
#pragma pack(pop)