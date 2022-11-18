// Object: SoundGraphData
// ClassId: 922
// RuntimeId: 13394
// TypeInfo: 0x0000000144E01CF0
#include "../Audio/AudioGraphData.h"
#include "../Audio/SoundGraphInfo.h"
#include "../Audio/AudioGraphParameter.h"
#include "../Audio/AudioGraphEvent.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundGraphData : public Audio::AudioGraphData {
        Audio::SoundGraphInfo Info; // 0x40
        Array<Audio::AudioGraphParameter> InputParameters; // 0x78
        Array<Audio::AudioGraphParameter> OutputParameters; // 0x80
        Array<Audio::AudioGraphEvent> InputEvents; // 0x88
        Array<Audio::AudioGraphEvent> OutputEvents; // 0x90
    }; // 0x98
    static_assert(sizeof(SoundGraphData) == 0x98);
}
#pragma pack(pop)