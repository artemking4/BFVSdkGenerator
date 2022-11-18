// Object: InputEventsGroup
// ClassId: 1133
// RuntimeId: 53259
// TypeInfo: 0x0000000144DC4080
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class InputEventsGroup : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
    }; // 0x20
    static_assert(sizeof(InputEventsGroup) == 0x20);
}
#pragma pack(pop)