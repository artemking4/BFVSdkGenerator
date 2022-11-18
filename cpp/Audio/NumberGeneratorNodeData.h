// Object: NumberGeneratorNodeData
// ClassId: 1055
// RuntimeId: 10625
// TypeInfo: 0x0000000144E19040
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/NumberGeneratorMode.h"
#include "../Audio/NumberGeneratorNodeVersion.h"

#pragma pack(push, 8)
namespace Audio {
    class NumberGeneratorNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Trigger; // 0x18
        Audio::AudioGraphNodePort Min; // 0x20
        Audio::AudioGraphNodePort Max; // 0x28
        Audio::NumberGeneratorMode Mode; // 0x30
        Audio::AudioGraphNodePort Y; // 0x34
        Audio::NumberGeneratorNodeVersion Version; // 0x3C
    }; // 0x40
    static_assert(sizeof(NumberGeneratorNodeData) == 0x40);
}
#pragma pack(pop)