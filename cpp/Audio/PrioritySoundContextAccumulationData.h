// Object: PrioritySoundContextAccumulationData
// ClassId: 4656
// RuntimeId: 24157
// TypeInfo: 0x0000000144E15B40
#include "../Audio/SoundContextAccumulationData.h"
#include "../Audio/PrioritySoundContextAccumulationMode.h"

#pragma pack(push, 8)
namespace Audio {
    class PrioritySoundContextAccumulationData : public Audio::SoundContextAccumulationData {
        Audio::PrioritySoundContextAccumulationMode Mode; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(PrioritySoundContextAccumulationData) == 0x20);
}
#pragma pack(pop)