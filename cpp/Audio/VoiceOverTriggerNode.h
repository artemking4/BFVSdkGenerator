// Object: VoiceOverTriggerNode
// ClassId: 5616
// RuntimeId: 10361
// TypeInfo: 0x0000000144E1AFC0
#include "../Audio/VoiceOverStructureNode.h"
#include "../Audio/VoiceOverTriggerParameter.h"
#include "../Global/Float32.h"
#include "../Audio/VoiceOverEvent.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverTriggerNode : public Audio::VoiceOverStructureNode {
        Array<Audio::VoiceOverTriggerParameter> Parameters; // 0x20
        Float32 Delay; // 0x28
        char pad_0x2C[0x4];
        Audio::VoiceOverEvent Event; // 0x30
    }; // 0x38
    static_assert(sizeof(VoiceOverTriggerNode) == 0x38);
}
#pragma pack(pop)