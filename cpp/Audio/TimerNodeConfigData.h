// Object: TimerNodeConfigData
// ClassId: 943
// RuntimeId: 56284
// TypeInfo: 0x0000000144E18240
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Global/Float32.h"
#include "../Audio/TimerMode.h"
#include "../Audio/ProgressMode.h"

#pragma pack(push, 8)
namespace Audio {
    class TimerNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Float32 Period; // 0x28
        Audio::TimerMode Mode; // 0x2C
        Audio::ProgressMode ProgressOutput; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(TimerNodeConfigData) == 0x38);
}
#pragma pack(pop)