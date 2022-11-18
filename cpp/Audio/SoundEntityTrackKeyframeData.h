// Object: SoundEntityTrackKeyframeData
// ClassId: 5184
// RuntimeId: 62381
// TypeInfo: 0x0000000144E1E640
#include "../Timeline/TimelineKeyframeData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundEntityTrackKeyframeData : public Timeline::TimelineKeyframeData {
        Float32 Time; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(SoundEntityTrackKeyframeData) == 0x20);
}
#pragma pack(pop)