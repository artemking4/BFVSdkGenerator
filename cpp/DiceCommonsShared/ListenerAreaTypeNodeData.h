// Object: ListenerAreaTypeNodeData
// ClassId: 1026
// RuntimeId: 432
// TypeInfo: 0x0000000144DC1980
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ListenerAreaTypeNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort AreaType; // 0x18
        Audio::AudioGraphNodePort IsInterior; // 0x20
        Audio::AudioGraphNodePort MaxInteriorProximity; // 0x28
        Int32 ListenerId; // 0x30
        Boolean UseDefaultListener; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(ListenerAreaTypeNodeData) == 0x38);
}
#pragma pack(pop)