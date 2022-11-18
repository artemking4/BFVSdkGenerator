// Object: ConfigurableRangeMapperNodeData
// ClassId: 971
// RuntimeId: 55455
// TypeInfo: 0x0000000144DC1200
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"
#include "../DiceCommonsShared/ConfigurableRangeMapperEntry.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ConfigurableRangeMapperNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort InputValue; // 0x18
        Audio::AudioGraphNodePort OutputValue; // 0x20
        Audio::AudioGraphNodePort DefaultOutputValue; // 0x28
        Array<DiceCommonsShared::ConfigurableRangeMapperEntry> Ranges; // 0x30
        Boolean DefaultOutputValueEnabled; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(ConfigurableRangeMapperNodeData) == 0x40);
}
#pragma pack(pop)