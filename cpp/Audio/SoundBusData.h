// Object: SoundBusData
// ClassId: 1098
// RuntimeId: 48011
// TypeInfo: 0x0000000144E01D70
#include "../Audio/AudioGraphNodeData.h"
#include "../Global/Uint8.h"
#include "../Global/CString.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundBusData : public Audio::AudioGraphNodeData {
        CString BusName; // 0x18
        Uint8 ChannelCount; // 0x20
        Audio::SoundGraphPluginRef SubmixPlugin; // 0x21
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SoundBusData) == 0x28);
}
#pragma pack(pop)