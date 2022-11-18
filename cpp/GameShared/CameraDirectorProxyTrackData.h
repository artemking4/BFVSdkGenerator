// Object: CameraDirectorProxyTrackData
// ClassId: 3997
// RuntimeId: 20471
// TypeInfo: 0x0000000144E9D8D0
#include "../Timeline/TimelineTrackData.h"
#include "../GameShared/CameraDirectorProxyKeyframe.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraDirectorProxyTrackData : public Timeline::TimelineTrackData {
        Array<Timeline::TimelineTrackData> Children; // 0x30
        Array<GameShared::CameraDirectorProxyKeyframe> Keyframes; // 0x38
    }; // 0x40
    static_assert(sizeof(CameraDirectorProxyTrackData) == 0x40);
}
#pragma pack(pop)