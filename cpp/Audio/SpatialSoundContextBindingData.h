// Object: SpatialSoundContextBindingData
// ClassId: 4659
// RuntimeId: 53659
// TypeInfo: 0x0000000144E15E40
#include "../Audio/SoundContextBindingData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SpatialSoundContextBindingData : public Audio::SoundContextBindingData {
        Boolean MustEncapsulate; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(SpatialSoundContextBindingData) == 0x20);
}
#pragma pack(pop)