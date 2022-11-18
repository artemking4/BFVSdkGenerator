// Object: MonitorNodeConfigData
// ClassId: 929
// RuntimeId: 51176
// TypeInfo: 0x0000000144BEBF20
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace AudioCoreVoiceMonitorShared {
    class MonitorNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Float32 MonitoringEnabled; // 0x28
        Float32 MonitoringPriority; // 0x2C
    }; // 0x30
    static_assert(sizeof(MonitorNodeConfigData) == 0x30);
}
#pragma pack(pop)