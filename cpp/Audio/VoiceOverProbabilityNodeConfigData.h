// Object: VoiceOverProbabilityNodeConfigData
// ClassId: 5630
// RuntimeId: 4261
// TypeInfo: 0x0000000144E1B840
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverProbabilityNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Float32 Probability; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VoiceOverProbabilityNodeConfigData) == 0x28);
}
#pragma pack(pop)