// Object: BusNodeData
// ClassId: 1099
// RuntimeId: 12083
// TypeInfo: 0x0000000144E04170
#include "../Audio/SoundBusData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class BusNodeData : public Audio::SoundBusData {
        Audio::AudioGraphNodePort Out; // 0x28
        Audio::SoundGraphPluginRef VuPlugin; // 0x30
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(BusNodeData) == 0x38);
}
#pragma pack(pop)