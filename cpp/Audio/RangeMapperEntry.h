// Object: RangeMapperEntry
// ClassId: 1161
// RuntimeId: 3143
// TypeInfo: 0x0000000144E18D40
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class RangeMapperEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort RangeStart; // 0x18
        Audio::AudioGraphNodePort RangeEnd; // 0x20
        Audio::AudioGraphNodePort OutputValue; // 0x28
    }; // 0x30
    static_assert(sizeof(RangeMapperEntry) == 0x30);
}
#pragma pack(pop)