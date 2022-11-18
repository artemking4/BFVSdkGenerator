// Object: ClientAnimationPoseTrack
// ClassId: 8614
// RuntimeId: 10314
// TypeInfo: 0x0000000144E3DC10
#include "../GameCommon/AnimationPoseTrack.h"

namespace GameClient {
    class ClientAnimationPoseTrack : public GameCommon::AnimationPoseTrack {
        char pad_0x1D0[0x10];
    }; // 0x1E0
    static_assert(sizeof(ClientAnimationPoseTrack) == 0x1E0);
}