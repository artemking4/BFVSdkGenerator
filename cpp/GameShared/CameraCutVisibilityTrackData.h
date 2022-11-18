// Object: CameraCutVisibilityTrackData
// ClassId: 3996
// RuntimeId: 52114
// TypeInfo: 0x0000000144E9D9D0
#include "../Timeline/TimelineTrackData.h"
#include "../Global/Boolean.h"
#include "../GameShared/CameraCutVisibilityKeyframe.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraCutVisibilityTrackData : public Timeline::TimelineTrackData {
        Array<GameShared::CameraCutVisibilityKeyframe> Keyframes; // 0x30
        Float32 StartTime; // 0x38
        Float32 EndTime; // 0x3C
        Boolean SetInitialVisibilityOnStart; // 0x40
        Boolean InitialVisibility; // 0x41
        Boolean Visibility; // 0x42
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(CameraCutVisibilityTrackData) == 0x48);
}
#pragma pack(pop)