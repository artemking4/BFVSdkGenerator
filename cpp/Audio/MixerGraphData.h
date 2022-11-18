// Object: MixerGraphData
// ClassId: 921
// RuntimeId: 28832
// TypeInfo: 0x0000000144E16D40
#include "../Audio/AudioGraphData.h"
#include "../Audio/AudioGraphParameter.h"
#include "../Audio/MixerInputInfo.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerGraphData : public Audio::AudioGraphData {
        Array<Audio::AudioGraphParameter> Inputs; // 0x40
        Array<Audio::MixerInputInfo> MixerInputInfos; // 0x48
        Array<Audio::AudioGraphParameter> Outputs; // 0x50
    }; // 0x58
    static_assert(sizeof(MixerGraphData) == 0x58);
}
#pragma pack(pop)