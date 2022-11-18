// Object: AnimationPoseTrackData
// ClassId: 4026
// RuntimeId: 55269
// TypeInfo: 0x0000000144E66540
#include "../GameShared/ANTControlTrackData.h"
#include "../Global/Boolean.h"
#include "../Timeline/GroupTrackRootData.h"

#pragma pack(push, 8)
namespace GameShared {
    class AnimationPoseTrackData : public GameShared::ANTControlTrackData {
        Timeline::GroupTrackRootData RootData; // 0x58
        Boolean UseAbsoluteTrajectory; // 0x60
        Boolean UseRootMotion; // 0x61
        char pad_0x62[0x6];
    }; // 0x68
    static_assert(sizeof(AnimationPoseTrackData) == 0x68);
}
#pragma pack(pop)