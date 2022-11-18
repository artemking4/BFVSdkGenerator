// Object: MathSoundContextAccumulationData
// ClassId: 4654
// RuntimeId: 10257
// TypeInfo: 0x0000000144E15CC0
#include "../Audio/SoundContextAccumulationData.h"
#include "../Audio/MathSoundContextAccumulationMode.h"

#pragma pack(push, 8)
namespace Audio {
    class MathSoundContextAccumulationData : public Audio::SoundContextAccumulationData {
        Audio::MathSoundContextAccumulationMode Mode; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(MathSoundContextAccumulationData) == 0x20);
}
#pragma pack(pop)