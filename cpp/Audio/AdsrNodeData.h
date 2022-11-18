// Object: AdsrNodeData
// ClassId: 947
// RuntimeId: 50498
// TypeInfo: 0x0000000144E1A6C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class AdsrNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Trigger; // 0x18
        Audio::AudioGraphNodePort Release; // 0x20
        Audio::AudioGraphNodePort A; // 0x28
        Audio::AudioGraphNodePort D; // 0x30
        Audio::AudioGraphNodePort S; // 0x38
        Audio::AudioGraphNodePort R; // 0x40
        Audio::AudioGraphNodePort Value; // 0x48
        Audio::AudioGraphNodePort Finished; // 0x50
        Float32 Scale; // 0x58
        Boolean RetriggerFromStart; // 0x5C
        char pad_0x5D[0x3];
    }; // 0x60
    static_assert(sizeof(AdsrNodeData) == 0x60);
}
#pragma pack(pop)