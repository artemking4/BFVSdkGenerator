// Object: TimelineEntityData
// ClassId: 3577
// RuntimeId: 23160
// TypeInfo: 0x0000000144F60D90
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Timeline/TimelineData.h"
#include "../Global/Boolean.h"
#include "../Timeline/TimelineClock.h"
#include "../Global/Uint8.h"
#include "../Global/Float32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace Timeline {
    class TimelineEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Timeline::TimelineData TimelineData; // 0x28
        Timeline::TimelineClock DeltaTimeClock; // 0x30
        Float32 BlendInTime; // 0x34
        Float32 BlendOutTime; // 0x38
        Float32 InitTime; // 0x3C
        Float32 StartTime; // 0x40
        Float32 EndTime; // 0x44
        Float32 PlaybackRate; // 0x48
        Uint16 UpdatePassFlags; // 0x4C
        Boolean AutoPlay; // 0x4E
        Boolean AutoInitConnectedProperties; // 0x4F
        Boolean ResetTimeOnStarted; // 0x50
        Boolean AllowAnimationCarryForward; // 0x51
        Boolean AlwaysEndOnPreFrame; // 0x52
        Boolean SyncTimelines; // 0x53
        Boolean TimelineInterpolation; // 0x54
        Uint8 RuntimeFramerate; // 0x55
        Boolean Looping; // 0x56
        Boolean Infinite; // 0x57
        Boolean PrintCurrentTime; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(TimelineEntityData) == 0x60);
}
#pragma pack(pop)