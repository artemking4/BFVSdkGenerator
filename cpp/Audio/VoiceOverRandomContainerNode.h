// Object: VoiceOverRandomContainerNode
// ClassId: 5615
// RuntimeId: 62470
// TypeInfo: 0x0000000144E1AEC0
#include "../Audio/VoiceOverStructureNode.h"
#include "../Audio/VoiceOverIntervalNode.h"
#include "../Audio/VoiceOverRandomContainerOutput.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverRandomContainerNode : public Audio::VoiceOverStructureNode {
        Array<Audio::VoiceOverIntervalNode> Intervals; // 0x20
        Array<Audio::VoiceOverRandomContainerOutput> FlowOutputs; // 0x28
    }; // 0x30
    static_assert(sizeof(VoiceOverRandomContainerNode) == 0x30);
}
#pragma pack(pop)