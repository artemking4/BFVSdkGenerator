// Object: VoiceOverLabelNodeConfigData
// ClassId: 5629
// RuntimeId: 44939
// TypeInfo: 0x0000000144E1B940
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverLabel.h"
#include "../Audio/VoiceOverLabelSourceMode.h"
#include "../Audio/VoiceOverLabelCompareMode.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLabelNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Array<Audio::VoiceOverLabel> WantedLabels; // 0x20
        Array<Audio::VoiceOverLabel> UnwantedLabels; // 0x28
        Audio::VoiceOverLabelSourceMode SourceMode; // 0x30
        Audio::VoiceOverLabelCompareMode WantedCompareMode; // 0x34
        Audio::VoiceOverLabelCompareMode UnwantedCompareMode; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(VoiceOverLabelNodeConfigData) == 0x40);
}
#pragma pack(pop)