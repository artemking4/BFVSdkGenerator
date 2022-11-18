// Object: VoiceOverArithmeticNodeConfigData
// ClassId: 5618
// RuntimeId: 49387
// TypeInfo: 0x0000000144E1C540
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverArithmeticExpressionType.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverArithmeticNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverArithmeticExpressionType Operation; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VoiceOverArithmeticNodeConfigData) == 0x28);
}
#pragma pack(pop)