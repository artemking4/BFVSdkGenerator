// Object: RandomIntegerNodeData
// ClassId: 1080
// RuntimeId: 22200
// TypeInfo: 0x0000000144DC3900
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class RandomIntegerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Trigger; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Int32 Min; // 0x28
        Int32 Max; // 0x2C
    }; // 0x30
    static_assert(sizeof(RandomIntegerNodeData) == 0x30);
}
#pragma pack(pop)