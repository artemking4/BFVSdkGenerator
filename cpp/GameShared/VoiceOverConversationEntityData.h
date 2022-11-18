// Object: VoiceOverConversationEntityData
// ClassId: 3887
// RuntimeId: 11634
// TypeInfo: 0x0000000144E6D8D0
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverConversationInfo.h"
#include "../GameShared/VoiceOverConversationEntityTrackInfo.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class VoiceOverConversationEntityData : public Entity::EntityData {
        Audio::VoiceOverConversationInfo Conversation; // 0x20
        Array<GameShared::VoiceOverConversationEntityTrackInfo> TrackInfos; // 0x50
        Float32 TriggerDelay; // 0x58
        Float32 FinishedDelay; // 0x5C
        Int32 PronunciationIndex; // 0x60
        char pad_0x64[0x4];
        Array<CString> ReferencedWaveFiles; // 0x68
        Boolean TriggerEnabled; // 0x70
        Boolean RunOnce; // 0x71
        Boolean NeedsTriggerResult; // 0x72
        Boolean CancelOnDeinit; // 0x73
        char pad_0x74[0x4];
    }; // 0x78
    static_assert(sizeof(VoiceOverConversationEntityData) == 0x78);
}
#pragma pack(pop)