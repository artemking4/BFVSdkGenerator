// Object: NuiSpeechSettings
// ClassId: 5001
// RuntimeId: 14919
// TypeInfo: 0x0000000144D29920
#include "../Core/SystemSettings.h"
#include "../CasablancaShared/NuiSpeechDialect.h"
#include "../CasablancaShared/NuiSpeechConfidencePolicySetup.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechSettings : public Core::SystemSettings {
        Array<CasablancaShared::NuiSpeechDialect> DialectsConfiguration; // 0x20
        CasablancaShared::NuiSpeechConfidencePolicySetup DefaultConfidencePolicy; // 0x28
    }; // 0x30
    static_assert(sizeof(NuiSpeechSettings) == 0x30);
}
#pragma pack(pop)