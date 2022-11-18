// Object: TimerNodeData
// ClassId: 1107
// RuntimeId: 22705
// TypeInfo: 0x0000000144E182C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/TimerMode.h"
#include "../Audio/ProgressMode.h"
#include "../Audio/TimerNodeVersion.h"

#pragma pack(push, 8)
namespace Audio {
    class TimerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Start; // 0x18
        Audio::AudioGraphNodePort Stop; // 0x20
        Audio::AudioGraphNodePort Period; // 0x28
        Audio::AudioGraphNodePort Tick; // 0x30
        Audio::AudioGraphNodePort Progress; // 0x38
        Audio::TimerMode Mode; // 0x40
        Audio::ProgressMode ProgressOutput; // 0x44
        Audio::TimerNodeVersion Version; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(TimerNodeData) == 0x50);
}
#pragma pack(pop)