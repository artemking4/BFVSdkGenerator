// Object: MultiCrossfaderNodeConfigData
// ClassId: 930
// RuntimeId: 55290
// TypeInfo: 0x0000000144E190C0
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Audio/MultiCrossfaderConfigGroup.h"

#pragma pack(push, 8)
namespace Audio {
    class MultiCrossfaderNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<Audio::MultiCrossfaderConfigGroup> CrossfaderGroups; // 0x28
    }; // 0x30
    static_assert(sizeof(MultiCrossfaderNodeConfigData) == 0x30);
}
#pragma pack(pop)