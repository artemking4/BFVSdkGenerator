// Object: VoiceOverSystemAsset
// ClassId: 911
// RuntimeId: 18140
// TypeInfo: 0x0000000144E1A7C0
#include "../Core/Asset.h"
#include "../Audio/VoiceOverInterval.h"
#include "../Audio/VoiceOverLabel.h"
#include "../Audio/VoiceOverObject.h"
#include "../Audio/VoiceOverGlobalConstantValue.h"
#include "../Audio/AudioLanguage.h"
#include "../Audio/VoiceOverPronunciation.h"
#include "../Audio/VoiceOverConversationQueueGroup.h"
#include "../Audio/VoiceOverLabelArray.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverSystemAsset : public Core::Asset {
        Array<Audio::VoiceOverInterval> Intervals; // 0x20
        Array<Audio::VoiceOverLabel> Labels; // 0x28
        Array<Audio::VoiceOverObject> Types; // 0x30
        Array<Audio::VoiceOverObject> Objects; // 0x38
        Array<Audio::VoiceOverGlobalConstantValue> Constants; // 0x40
        Audio::AudioLanguage MasterLanguage; // 0x48
        Audio::VoiceOverPronunciation DefaultPronunciation; // 0x50
        Array<Audio::VoiceOverPronunciation> Pronunciations; // 0x58
        Array<Audio::VoiceOverConversationQueueGroup> QueueGroups; // 0x60
        Audio::VoiceOverConversationQueueGroup DefaultPositionedQueueGroup; // 0x68
        Audio::VoiceOverConversationQueueGroup DefaultUnpositionedQueueGroup; // 0x70
        Array<Audio::VoiceOverLabelArray> LabelArrays; // 0x78
    }; // 0x80
    static_assert(sizeof(VoiceOverSystemAsset) == 0x80);
}
#pragma pack(pop)