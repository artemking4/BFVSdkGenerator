// Object: DicePhysicsNodeData
// ClassId: 985
// RuntimeId: 52312
// TypeInfo: 0x0000000144DC4180
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DicePhysicsNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort AngularVelocity_X; // 0x18
        Audio::AudioGraphNodePort AngularVelocity_Y; // 0x20
        Audio::AudioGraphNodePort AngularVelocity_Z; // 0x28
        Boolean SignedSpeed; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DicePhysicsNodeData) == 0x38);
}
#pragma pack(pop)