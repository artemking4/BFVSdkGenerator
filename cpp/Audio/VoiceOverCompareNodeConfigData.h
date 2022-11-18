// Object: VoiceOverCompareNodeConfigData
// ClassId: 5619
// RuntimeId: 18362
// TypeInfo: 0x0000000144E1C440
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverCompareExpressionType.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverCompareNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverCompareExpressionType Operation; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VoiceOverCompareNodeConfigData) == 0x28);
}
#pragma pack(pop)