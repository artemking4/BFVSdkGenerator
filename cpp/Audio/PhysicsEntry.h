// Object: PhysicsEntry
// ClassId: 1159
// RuntimeId: 63415
// TypeInfo: 0x0000000144E02AF0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/OutputNodeData.h"

#pragma pack(push, 8)
namespace Audio {
    class PhysicsEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Distance; // 0x18
        Audio::AudioGraphNodePort Azimuth; // 0x20
        Audio::AudioGraphNodePort ElevationAngle; // 0x28
        Audio::OutputNodeData Output; // 0x30
    }; // 0x38
    static_assert(sizeof(PhysicsEntry) == 0x38);
}
#pragma pack(pop)