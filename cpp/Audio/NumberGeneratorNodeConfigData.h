// Object: NumberGeneratorNodeConfigData
// ClassId: 932
// RuntimeId: 46022
// TypeInfo: 0x0000000144E18FC0
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class NumberGeneratorNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Float32 Min; // 0x28
        Float32 Max; // 0x2C
    }; // 0x30
    static_assert(sizeof(NumberGeneratorNodeConfigData) == 0x30);
}
#pragma pack(pop)