// Object: SimpleValueSelectorNodeConfigData
// ClassId: 941
// RuntimeId: 35003
// TypeInfo: 0x0000000144E18440
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class SimpleValueSelectorNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<Float32> OutValues; // 0x28
    }; // 0x30
    static_assert(sizeof(SimpleValueSelectorNodeConfigData) == 0x30);
}
#pragma pack(pop)