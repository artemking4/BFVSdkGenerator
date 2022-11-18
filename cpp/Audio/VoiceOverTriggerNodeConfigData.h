// Object: VoiceOverTriggerNodeConfigData
// ClassId: 5632
// RuntimeId: 55193
// TypeInfo: 0x0000000144E1AF40
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Global/Float32.h"
#include "../Audio/VoiceOverTriggerParameter.h"
#include "../Audio/VoiceOverEvent.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverTriggerNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Float32 Delay; // 0x20
        char pad_0x24[0x4];
        Array<Audio::VoiceOverTriggerParameter> Parameters; // 0x28
        Audio::VoiceOverEvent Event; // 0x30
    }; // 0x38
    static_assert(sizeof(VoiceOverTriggerNodeConfigData) == 0x38);
}
#pragma pack(pop)