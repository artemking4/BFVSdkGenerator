// Object: ReleaseTimelineControlTrackData
// ClassId: 4053
// RuntimeId: 42619
// TypeInfo: 0x0000000144F63A90
#include "../Timeline/SchematicPinTrackData.h"
#include "../Timeline/EventKeyframe.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Timeline {
    class ReleaseTimelineControlTrackData : public Timeline::SchematicPinTrackData {
        Array<Timeline::EventKeyframe> Keyframes; // 0x40
        Boolean ReleaseOnAnimationEnd; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(ReleaseTimelineControlTrackData) == 0x50);
}
#pragma pack(pop)