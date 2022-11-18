// Object: EventTrackData
// ClassId: 4023
// RuntimeId: 47746
// TypeInfo: 0x0000000144F64620
#include "../Timeline/SchematicPinTrackData.h"
#include "../Timeline/EventKeyframe.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Timeline {
    class EventTrackData : public Timeline::SchematicPinTrackData {
        Array<Timeline::EventKeyframe> Keyframes; // 0x40
        Int32 AntiEventId; // 0x48
        Boolean FireEventsUponSkip; // 0x4C
        Boolean UpdatePropertiesAtEvents; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(EventTrackData) == 0x50);
}
#pragma pack(pop)