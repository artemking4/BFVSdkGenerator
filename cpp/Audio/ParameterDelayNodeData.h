// Object: ParameterDelayNodeData
// ClassId: 1070
// RuntimeId: 1034
// TypeInfo: 0x0000000144E18EC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/ParameterDelayNodeEntry.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class ParameterDelayNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::ParameterDelayNodeEntry> Parameters; // 0x18
        Audio::AudioGraphNodePort DelayTime; // 0x20
        Float32 MaxDelayTime; // 0x28
        Uint32 MaxUpdatesPerSecond; // 0x2C
    }; // 0x30
    static_assert(sizeof(ParameterDelayNodeData) == 0x30);
}
#pragma pack(pop)