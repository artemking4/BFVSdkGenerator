// Object: RangeMapperNodeData
// ClassId: 1081
// RuntimeId: 1342
// TypeInfo: 0x0000000144E18CC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/RangeMapperEntry.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class RangeMapperNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort DefaultOutputValue; // 0x20
        Array<Audio::RangeMapperEntry> Ranges; // 0x28
        Audio::AudioGraphNodePort Out; // 0x30
        Boolean DefaultOutputValueEnabled; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(RangeMapperNodeData) == 0x40);
}
#pragma pack(pop)