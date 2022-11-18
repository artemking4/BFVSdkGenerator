// Object: ServerAnimationPoseTrack
// ClassId: 8615
// RuntimeId: 51280
// TypeInfo: 0x0000000144E5E9D0
#include "../GameCommon/AnimationPoseTrack.h"

namespace GameServer {
    class ServerAnimationPoseTrack : public GameCommon::AnimationPoseTrack {
        char pad_0x1D0[0x10];
    }; // 0x1E0
    static_assert(sizeof(ServerAnimationPoseTrack) == 0x1E0);
}