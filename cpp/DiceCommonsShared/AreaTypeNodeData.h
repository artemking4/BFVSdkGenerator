// Object: AreaTypeNodeData
// ClassId: 954
// RuntimeId: 17564
// TypeInfo: 0x0000000144DC1A00
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AreaTypeNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Check; // 0x18
        Audio::AudioGraphNodePort Result; // 0x20
        Audio::AudioGraphNodePort AreaType; // 0x28
        Audio::AudioGraphNodePort IsInterior; // 0x30
        Audio::AudioGraphNodePort MaxInteriorProximity; // 0x38
    }; // 0x40
    static_assert(sizeof(AreaTypeNodeData) == 0x40);
}
#pragma pack(pop)