// Object: RenderFramesTrackData
// ClassId: 4021
// RuntimeId: 8937
// TypeInfo: 0x0000000144EB9490
#include "../Timeline/TimelineTrackData.h"
#include "../WorldRender/RenderFramesKeyframe.h"

#pragma pack(push, 8)
namespace WorldRender {
    class RenderFramesTrackData : public Timeline::TimelineTrackData {
        Array<WorldRender::RenderFramesKeyframe> Keyframes; // 0x30
    }; // 0x38
    static_assert(sizeof(RenderFramesTrackData) == 0x38);
}
#pragma pack(pop)