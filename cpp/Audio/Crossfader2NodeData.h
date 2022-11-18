// Object: Crossfader2NodeData
// ClassId: 976
// RuntimeId: 59778
// TypeInfo: 0x0000000144E1A4C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class Crossfader2NodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Ctrl; // 0x18
        Audio::AudioGraphNodePort CtrlOut1; // 0x20
        Audio::AudioGraphNodePort CtrlOut2; // 0x28
    }; // 0x30
    static_assert(sizeof(Crossfader2NodeData) == 0x30);
}
#pragma pack(pop)