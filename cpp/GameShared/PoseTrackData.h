// Object: PoseTrackData
// ClassId: 3994
// RuntimeId: 56791
// TypeInfo: 0x0000000144E96330
#include "../GameShared/ANTLayerData.h"
#include "../GameShared/PoseTrackKeyframe.h"

#pragma pack(push, 8)
namespace GameShared {
    class PoseTrackData : public GameShared::ANTLayerData {
        Array<GameShared::PoseTrackKeyframe> Keyframes; // 0x38
    }; // 0x40
    static_assert(sizeof(PoseTrackData) == 0x40);
}
#pragma pack(pop)