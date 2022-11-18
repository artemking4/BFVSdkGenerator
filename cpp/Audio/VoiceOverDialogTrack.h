// Object: VoiceOverDialogTrack
// ClassId: 5583
// RuntimeId: 15691
// TypeInfo: 0x0000000144E1B340
#include "../Core/DataContainer.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverDialogTakeMapping.h"
#include "../Audio/VoiceOverDialogTakeBehavior.h"
#include "../Global/Boolean.h"
#include "../Global/Uint8.h"
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/VoiceOverConversationQueueGroup.h"
#include "../Audio/VoiceOverDialogTrackSourcePosition.h"
#include "../Audio/VoiceOverDialogClip.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverDialogTrack : public Core::DataContainer {
        Audio::VoiceOverValueConnection Source; // 0x18
        Audio::VoiceOverValueConnection TakeControl; // 0x28
        Array<Audio::VoiceOverDialogTakeMapping> TakeIndexMapping; // 0x38
        Audio::VoiceOverDialogTakeBehavior TakeSwitching; // 0x40
        char pad_0x44[0x4];
        Audio::AudioGraphNodeData Output; // 0x48
        Audio::AudioGraphNodeData SamplerNode; // 0x50
        Audio::VoiceOverConversationQueueGroup QueueGroup; // 0x58
        Audio::VoiceOverDialogTrackSourcePosition TrackSourcePosition; // 0x60
        Array<Audio::VoiceOverDialogClip> Clips; // 0x68
        Boolean TakeSwitchingOnResume; // 0x70
        Uint8 ParentTrackIndex; // 0x71
        Uint8 GroupIndex; // 0x72
        char pad_0x73[0x5];
    }; // 0x78
    static_assert(sizeof(VoiceOverDialogTrack) == 0x78);
}
#pragma pack(pop)