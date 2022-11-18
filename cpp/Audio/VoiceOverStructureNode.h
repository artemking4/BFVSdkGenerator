// Object: VoiceOverStructureNode
// ClassId: 5611
// RuntimeId: 16338
// TypeInfo: 0x0000000144E1B6C0
#include "../Audio/VoiceOverNode.h"
#include "../Audio/VoiceOverLogicFlowMode.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverStructureNode : public Audio::VoiceOverNode {
        Audio::VoiceOverLogicFlowMode FlowMode; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(VoiceOverStructureNode) == 0x20);
}
#pragma pack(pop)