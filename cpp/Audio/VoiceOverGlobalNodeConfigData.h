// Object: VoiceOverGlobalNodeConfigData
// ClassId: 5626
// RuntimeId: 16961
// TypeInfo: 0x0000000144E1BCC0
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverNamedValue.h"
#include "../Audio/VoiceOverObject.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverGlobalNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverNamedValue Field; // 0x20
        Audio::VoiceOverObject Object; // 0x28
    }; // 0x30
    static_assert(sizeof(VoiceOverGlobalNodeConfigData) == 0x30);
}
#pragma pack(pop)