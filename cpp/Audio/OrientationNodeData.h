// Object: OrientationNodeData
// ClassId: 1061
// RuntimeId: 55172
// TypeInfo: 0x0000000144E02BF0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/OrientationNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class OrientationNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort ListenerAngularVelocity; // 0x18
        Array<Audio::OrientationNodeEntry> Entries; // 0x20
    }; // 0x28
    static_assert(sizeof(OrientationNodeData) == 0x28);
}
#pragma pack(pop)