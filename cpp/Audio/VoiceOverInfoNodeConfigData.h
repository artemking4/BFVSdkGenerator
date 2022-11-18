// Object: VoiceOverInfoNodeConfigData
// ClassId: 5627
// RuntimeId: 51706
// TypeInfo: 0x0000000144E1BBC0
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverNamedValue.h"
#include "../Audio/VoiceOverObject.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverInfoNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverNamedValue Field; // 0x20
        Audio::VoiceOverObject ExpectedType; // 0x28
    }; // 0x30
    static_assert(sizeof(VoiceOverInfoNodeConfigData) == 0x30);
}
#pragma pack(pop)