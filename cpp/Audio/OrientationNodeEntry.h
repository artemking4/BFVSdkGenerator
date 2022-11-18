// Object: OrientationNodeEntry
// ClassId: 1156
// RuntimeId: 22424
// TypeInfo: 0x0000000144E02C70
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/OutputNodeData.h"

#pragma pack(push, 8)
namespace Audio {
    class OrientationNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort ListenerRelativeYaw; // 0x18
        Audio::AudioGraphNodePort ListenerRelativePitch; // 0x20
        Audio::AudioGraphNodePort ListenerRelativeRoll; // 0x28
        Audio::AudioGraphNodePort ListenerRelativeAngle; // 0x30
        Audio::AudioGraphNodePort ListenerFovRelativeAngle; // 0x38
        Audio::AudioGraphNodePort TowardsListenerAngle; // 0x40
        Audio::OutputNodeData Output; // 0x48
    }; // 0x50
    static_assert(sizeof(OrientationNodeEntry) == 0x50);
}
#pragma pack(pop)