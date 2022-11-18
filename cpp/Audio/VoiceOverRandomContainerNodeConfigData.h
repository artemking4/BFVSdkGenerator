// Object: VoiceOverRandomContainerNodeConfigData
// ClassId: 5631
// RuntimeId: 54058
// TypeInfo: 0x0000000144E1AE40
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverRandomContainerOutput.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverRandomContainerNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Array<Audio::VoiceOverRandomContainerOutput> FlowOutputs; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverRandomContainerNodeConfigData) == 0x28);
}
#pragma pack(pop)