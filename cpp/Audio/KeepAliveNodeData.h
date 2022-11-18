// Object: KeepAliveNodeData
// ClassId: 1013
// RuntimeId: 13303
// TypeInfo: 0x0000000144E17FC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class KeepAliveNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort KeepAlive; // 0x18
    }; // 0x20
    static_assert(sizeof(KeepAliveNodeData) == 0x20);
}
#pragma pack(pop)