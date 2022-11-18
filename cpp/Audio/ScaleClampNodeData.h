// Object: ScaleClampNodeData
// ClassId: 1090
// RuntimeId: 33999
// TypeInfo: 0x0000000144E188C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class ScaleClampNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort InMin; // 0x20
        Audio::AudioGraphNodePort InMax; // 0x28
        Audio::AudioGraphNodePort OutMin; // 0x30
        Audio::AudioGraphNodePort OutMax; // 0x38
        Audio::AudioGraphNodePort Out; // 0x40
    }; // 0x48
    static_assert(sizeof(ScaleClampNodeData) == 0x48);
}
#pragma pack(pop)