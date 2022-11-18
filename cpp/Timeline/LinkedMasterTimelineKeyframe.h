// Object: LinkedMasterTimelineKeyframe
// ClassId: 4230
// RuntimeId: 21100
// TypeInfo: 0x0000000144F63E10
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Timeline {
    class LinkedMasterTimelineKeyframe : public Core::DataContainer {
        Float32 Time; // 0x18
        Float32 Length; // 0x1C
    }; // 0x20
    static_assert(sizeof(LinkedMasterTimelineKeyframe) == 0x20);
}
#pragma pack(pop)