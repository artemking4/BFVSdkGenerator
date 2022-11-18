// Object: PassbyDetectorNodeData
// ClassId: 1075
// RuntimeId: 56191
// TypeInfo: 0x0000000144DC3A80
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class PassbyDetectorNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort TimeToApex; // 0x18
        Audio::AudioGraphNodePort ExtraDistance; // 0x20
        Audio::AudioGraphNodePort SpeedThreshold; // 0x28
        Audio::AudioGraphNodePort RelativeSpeedThreshold; // 0x30
        Audio::AudioGraphNodePort CooldownTime; // 0x38
        Audio::AudioGraphNodePort Trigger; // 0x40
        Audio::AudioGraphNodePort Cancel; // 0x48
    }; // 0x50
    static_assert(sizeof(PassbyDetectorNodeData) == 0x50);
}
#pragma pack(pop)