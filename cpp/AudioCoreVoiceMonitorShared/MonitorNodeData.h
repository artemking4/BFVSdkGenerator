// Object: MonitorNodeData
// ClassId: 1050
// RuntimeId: 65036
// TypeInfo: 0x0000000144BEBFA0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Uint16.h"
#include "../AudioCoreVoiceMonitorShared/MonitoredNodeMetaData.h"
#include "../Core/Asset.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace AudioCoreVoiceMonitorShared {
    class MonitorNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort MonitoringEnabled; // 0x18
        Audio::AudioGraphNodePort MonitoringPriority; // 0x20
        Array<AudioCoreVoiceMonitorShared::MonitoredNodeMetaData> NodeMetaData; // 0x28
        Core::Asset Asset; // 0x30
        Guid PartitionGuid; // 0x38
        Uint16 Port; // 0x48
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(MonitorNodeData) == 0x50);
}
#pragma pack(pop)