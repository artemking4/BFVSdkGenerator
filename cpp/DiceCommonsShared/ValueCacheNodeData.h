// Object: ValueCacheNodeData
// ClassId: 1110
// RuntimeId: 23651
// TypeInfo: 0x0000000144DB6A10
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ValueCacheNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Store; // 0x18
        Audio::AudioGraphNodePort Value; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Float32 DefaultValue; // 0x30
        Boolean SetInitialValueAsDefault; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(ValueCacheNodeData) == 0x38);
}
#pragma pack(pop)