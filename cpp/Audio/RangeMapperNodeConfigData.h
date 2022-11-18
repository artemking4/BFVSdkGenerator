// Object: RangeMapperNodeConfigData
// ClassId: 938
// RuntimeId: 64054
// TypeInfo: 0x0000000144E18C40
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Audio/RangeMapperConfigEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class RangeMapperNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<Audio::RangeMapperConfigEntry> Ranges; // 0x28
    }; // 0x30
    static_assert(sizeof(RangeMapperNodeConfigData) == 0x30);
}
#pragma pack(pop)