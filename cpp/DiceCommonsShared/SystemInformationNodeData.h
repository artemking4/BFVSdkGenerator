// Object: SystemInformationNodeData
// ClassId: 1105
// RuntimeId: 4730
// TypeInfo: 0x0000000144DB6A90
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SystemInformationNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort ChannelCount; // 0x18
    }; // 0x20
    static_assert(sizeof(SystemInformationNodeData) == 0x20);
}
#pragma pack(pop)