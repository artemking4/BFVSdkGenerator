// Object: EventSwitcherEntry
// ClassId: 1131
// RuntimeId: 19167
// TypeInfo: 0x0000000144E19EC0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class EventSwitcherEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort CaseTrigger; // 0x18
        Float32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(EventSwitcherEntry) == 0x28);
}
#pragma pack(pop)