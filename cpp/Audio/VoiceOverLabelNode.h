// Object: VoiceOverLabelNode
// ClassId: 5607
// RuntimeId: 53169
// TypeInfo: 0x0000000144E1B9C0
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverLabelSource.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverLabel.h"
#include "../Audio/VoiceOverLabelSourceMode.h"
#include "../Audio/VoiceOverLabelCompareMode.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLabelNode : public Audio::VoiceOverExpressionNode {
        Array<Audio::VoiceOverLabelSource> Sources; // 0x18
        Audio::VoiceOverValue False; // 0x20
        Audio::VoiceOverValue True; // 0x28
        Array<Audio::VoiceOverLabel> WantedLabels; // 0x30
        Array<Audio::VoiceOverLabel> UnwantedLabels; // 0x38
        Audio::VoiceOverLabelSourceMode SourceMode; // 0x40
        Audio::VoiceOverLabelCompareMode WantedCompareMode; // 0x44
        Audio::VoiceOverLabelCompareMode UnwantedCompareMode; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(VoiceOverLabelNode) == 0x50);
}
#pragma pack(pop)