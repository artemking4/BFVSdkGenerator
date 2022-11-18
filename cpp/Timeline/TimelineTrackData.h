// Object: TimelineTrackData
// ClassId: 3984
// RuntimeId: 24680
// TypeInfo: 0x0000000144F60B10
#include "../Entity/GameObjectData.h"
#include "../Global/Boolean.h"
#include "../Timeline/TimelineTrackDataConditionsBase.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace Timeline {
    class TimelineTrackData : public Entity::GameObjectData {
        Array<Timeline::TimelineTrackDataConditionsBase> Conditions; // 0x20
        Uint16 UpdatePassFlags; // 0x28
        Uint16 BucketPreChildrenOrder; // 0x2A
        Uint16 BucketOrder; // 0x2C
        Boolean ExposePins; // 0x2E
        Boolean IsDisabled; // 0x2F
    }; // 0x30
    static_assert(sizeof(TimelineTrackData) == 0x30);
}
#pragma pack(pop)