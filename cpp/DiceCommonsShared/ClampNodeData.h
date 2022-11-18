// Object: ClampNodeData
// ClassId: 966
// RuntimeId: 4285
// TypeInfo: 0x0000000144DC1500
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ClampNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Float32 ClampMin; // 0x28
        Float32 ClampMax; // 0x2C
    }; // 0x30
    static_assert(sizeof(ClampNodeData) == 0x30);
}
#pragma pack(pop)