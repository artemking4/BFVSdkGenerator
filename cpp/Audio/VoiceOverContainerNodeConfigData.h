// Object: VoiceOverContainerNodeConfigData
// ClassId: 5621
// RuntimeId: 42001
// TypeInfo: 0x0000000144E1B5C0
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverContainerConditionMode.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverContainerNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverContainerConditionMode ConditionMode; // 0x20
        Float32 Probability; // 0x24
        Boolean AlwaysResetInterval; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(VoiceOverContainerNodeConfigData) == 0x30);
}
#pragma pack(pop)