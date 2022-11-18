// Object: ConfigurableRangeMapperEntry
// ClassId: 1124
// RuntimeId: 54607
// TypeInfo: 0x0000000144DC1280
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ConfigurableRangeMapperEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort RangeStart; // 0x18
        Audio::AudioGraphNodePort RangeEnd; // 0x20
        Audio::AudioGraphNodePort OutputValue; // 0x28
    }; // 0x30
    static_assert(sizeof(ConfigurableRangeMapperEntry) == 0x30);
}
#pragma pack(pop)