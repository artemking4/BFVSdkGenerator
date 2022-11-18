// Object: VoiceOverTriggerParameter
// ClassId: 5638
// RuntimeId: 49756
// TypeInfo: 0x0000000144E1B040
#include "../Core/DataContainer.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverNamedValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverTriggerParameter : public Core::DataContainer {
        Audio::VoiceOverValueConnection Source; // 0x18
        Audio::VoiceOverNamedValue EventParameter; // 0x28
    }; // 0x30
    static_assert(sizeof(VoiceOverTriggerParameter) == 0x30);
}
#pragma pack(pop)