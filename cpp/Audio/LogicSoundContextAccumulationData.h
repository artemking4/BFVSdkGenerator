// Object: LogicSoundContextAccumulationData
// ClassId: 4653
// RuntimeId: 52483
// TypeInfo: 0x0000000144E15BC0
#include "../Audio/SoundContextAccumulationData.h"
#include "../Audio/LogicSoundContextAccumulationMode.h"

#pragma pack(push, 8)
namespace Audio {
    class LogicSoundContextAccumulationData : public Audio::SoundContextAccumulationData {
        Audio::LogicSoundContextAccumulationMode Mode; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(LogicSoundContextAccumulationData) == 0x20);
}
#pragma pack(pop)