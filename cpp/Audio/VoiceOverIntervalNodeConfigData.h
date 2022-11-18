// Object: VoiceOverIntervalNodeConfigData
// ClassId: 5628
// RuntimeId: 38194
// TypeInfo: 0x0000000144E1BAC0
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverInterval.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverIntervalNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverInterval Interval; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverIntervalNodeConfigData) == 0x28);
}
#pragma pack(pop)