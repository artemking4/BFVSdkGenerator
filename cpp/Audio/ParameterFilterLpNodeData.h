// Object: ParameterFilterLpNodeData
// ClassId: 1072
// RuntimeId: 2177
// TypeInfo: 0x0000000144E18E40
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/ParameterFilterLpNodeVersion.h"

#pragma pack(push, 8)
namespace Audio {
    class ParameterFilterLpNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort Hz; // 0x28
        Audio::ParameterFilterLpNodeVersion Version; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ParameterFilterLpNodeData) == 0x38);
}
#pragma pack(pop)