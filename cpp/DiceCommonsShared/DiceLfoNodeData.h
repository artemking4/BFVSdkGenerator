// Object: DiceLfoNodeData
// ClassId: 984
// RuntimeId: 15368
// TypeInfo: 0x0000000144DC4200
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../DiceCommonsShared/LfoMode.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceLfoNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Hz; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Float32 Min; // 0x28
        Float32 Max; // 0x2C
        DiceCommonsShared::LfoMode Mode; // 0x30
        Boolean StartAtRandomValue; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(DiceLfoNodeData) == 0x38);
}
#pragma pack(pop)