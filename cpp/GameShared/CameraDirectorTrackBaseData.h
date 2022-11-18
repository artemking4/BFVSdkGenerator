// Object: CameraDirectorTrackBaseData
// ClassId: 3998
// RuntimeId: 49555
// TypeInfo: 0x0000000144E9D7D0
#include "../Timeline/TimelineTrackData.h"
#include "../GameShared/CameraTrackBaseData.h"

namespace GameShared {
    class CameraDirectorTrackBaseData : public Timeline::TimelineTrackData {
        Array<Timeline::TimelineTrackData> Children; // 0x30
        GameShared::CameraTrackBaseData PostTimelineCamera; // 0x38
    }; // 0x40
    static_assert(sizeof(CameraDirectorTrackBaseData) == 0x40);
}