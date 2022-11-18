// Object: VoiceOverConversationQueueGroup
// ClassId: 5579
// RuntimeId: 33544
// TypeInfo: 0x0000000144E1A9C0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/VoiceOverConversationQueueGroupPolyphony.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConversationQueueGroup : public Core::DataContainer {
        CString Name; // 0x18
        Audio::VoiceOverConversationQueueGroupPolyphony PolyphonyMode; // 0x20
        Uint32 Polyphony; // 0x24
    }; // 0x28
    static_assert(sizeof(VoiceOverConversationQueueGroup) == 0x28);
}
#pragma pack(pop)