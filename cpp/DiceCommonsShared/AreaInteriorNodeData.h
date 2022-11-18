// Object: AreaInteriorNodeData
// ClassId: 953
// RuntimeId: 95
// TypeInfo: 0x0000000144DC1A80
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AreaInteriorNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort InteriorMultiplier; // 0x18
        Audio::AudioGraphNodePort InteriorProximity; // 0x20
    }; // 0x28
    static_assert(sizeof(AreaInteriorNodeData) == 0x28);
}
#pragma pack(pop)