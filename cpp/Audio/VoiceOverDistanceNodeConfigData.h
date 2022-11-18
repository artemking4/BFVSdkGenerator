// Object: VoiceOverDistanceNodeConfigData
// ClassId: 5624
// RuntimeId: 55686
// TypeInfo: 0x0000000144E1BDC0
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverCompareExpressionType.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverDistanceNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverCompareExpressionType Operation; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VoiceOverDistanceNodeConfigData) == 0x28);
}
#pragma pack(pop)