// Object: ListenerNodeData
// ClassId: 1027
// RuntimeId: 20891
// TypeInfo: 0x0000000144DC3C80
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ListenerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort WorldX; // 0x18
        Audio::AudioGraphNodePort WorldY; // 0x20
        Audio::AudioGraphNodePort WorldZ; // 0x28
    }; // 0x30
    static_assert(sizeof(ListenerNodeData) == 0x30);
}
#pragma pack(pop)