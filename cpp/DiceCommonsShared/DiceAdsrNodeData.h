// Object: DiceAdsrNodeData
// ClassId: 983
// RuntimeId: 43596
// TypeInfo: 0x0000000144DC4280
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceAdsrNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Trigger; // 0x18
        Audio::AudioGraphNodePort Release; // 0x20
        Audio::AudioGraphNodePort A; // 0x28
        Audio::AudioGraphNodePort D; // 0x30
        Audio::AudioGraphNodePort S; // 0x38
        Audio::AudioGraphNodePort R; // 0x40
        Audio::AudioGraphNodePort Value; // 0x48
        Audio::AudioGraphNodePort TriggerOutput; // 0x50
        Audio::AudioGraphNodePort Finished; // 0x58
        Float32 Scale; // 0x60
        Boolean AlwaysStartFromZero; // 0x64
        char pad_0x65[0x3];
    }; // 0x68
    static_assert(sizeof(DiceAdsrNodeData) == 0x68);
}
#pragma pack(pop)