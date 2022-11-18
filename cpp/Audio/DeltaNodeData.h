// Object: DeltaNodeData
// ClassId: 981
// RuntimeId: 28836
// TypeInfo: 0x0000000144E1A1C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/DeltaGroup.h"

#pragma pack(push, 8)
namespace Audio {
    class DeltaNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::DeltaGroup> Deltas; // 0x18
    }; // 0x20
    static_assert(sizeof(DeltaNodeData) == 0x20);
}
#pragma pack(pop)