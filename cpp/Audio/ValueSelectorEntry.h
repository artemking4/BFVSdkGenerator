// Object: ValueSelectorEntry
// ClassId: 1170
// RuntimeId: 22988
// TypeInfo: 0x0000000144E181C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class ValueSelectorEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Input; // 0x18
        Float32 CaseValue; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ValueSelectorEntry) == 0x28);
}
#pragma pack(pop)