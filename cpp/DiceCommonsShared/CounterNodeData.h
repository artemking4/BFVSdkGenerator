// Object: CounterNodeData
// ClassId: 975
// RuntimeId: 299
// TypeInfo: 0x0000000144DC1180
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CounterNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Increment; // 0x18
        Audio::AudioGraphNodePort Decrement; // 0x20
        Audio::AudioGraphNodePort Reset; // 0x28
        Audio::AudioGraphNodePort HasChanged; // 0x30
        Audio::AudioGraphNodePort OutputValue; // 0x38
        Float32 StartValue; // 0x40
        Float32 CountStep; // 0x44
    }; // 0x48
    static_assert(sizeof(CounterNodeData) == 0x48);
}
#pragma pack(pop)