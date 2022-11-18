// Object: PhysicsNodeData
// ClassId: 1077
// RuntimeId: 1316
// TypeInfo: 0x0000000144E029F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/PhysicsEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class PhysicsNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Distance; // 0x18
        Audio::AudioGraphNodePort Velocity; // 0x20
        Audio::AudioGraphNodePort RelativeVelocity; // 0x28
        Audio::AudioGraphNodePort Azimuth; // 0x30
        Audio::AudioGraphNodePort ElevationAngle; // 0x38
        Array<Audio::PhysicsEntry> Entries; // 0x40
    }; // 0x48
    static_assert(sizeof(PhysicsNodeData) == 0x48);
}
#pragma pack(pop)