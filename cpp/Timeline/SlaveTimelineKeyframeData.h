// Object: SlaveTimelineKeyframeData
// ClassId: 5183
// RuntimeId: 34656
// TypeInfo: 0x0000000144F63D10
#include "../Timeline/TimelineKeyframeData.h"
#include "../Global/Float32.h"
#include "../Timeline/TimelineEntityData.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace Timeline {
    class SlaveTimelineKeyframeData : public Timeline::TimelineKeyframeData {
        Float32 Time; // 0x18
        Float32 Length; // 0x1C
        Float32 GuideTime; // 0x20
        char pad_0x24[0x4];
        Timeline::TimelineEntityData TimelineData; // 0x28
        Array<Guid> SlaveGuidChain; // 0x30
    }; // 0x38
    static_assert(sizeof(SlaveTimelineKeyframeData) == 0x38);
}
#pragma pack(pop)