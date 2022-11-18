// Object: SwitcherEntry
// ClassId: 1168
// RuntimeId: 8687
// TypeInfo: 0x0000000144E183C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class SwitcherEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort CaseTrigger; // 0x18
        Float32 CaseValue; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SwitcherEntry) == 0x28);
}
#pragma pack(pop)