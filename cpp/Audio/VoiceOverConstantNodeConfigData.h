// Object: VoiceOverConstantNodeConfigData
// ClassId: 5620
// RuntimeId: 12423
// TypeInfo: 0x0000000144E1BFC0
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverConstantValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConstantNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverConstantValue Source; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverConstantNodeConfigData) == 0x28);
}
#pragma pack(pop)