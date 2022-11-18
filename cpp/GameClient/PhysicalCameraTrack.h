// Object: PhysicalCameraTrack
// ClassId: 8588
// RuntimeId: 5330
// TypeInfo: 0x0000000144E36B10
#include "../GameClient/CameraTrackWithSceneCamera.h"

namespace GameClient {
    class PhysicalCameraTrack : public GameClient::CameraTrackWithSceneCamera {
        char pad_0xD8[0xD8];
    }; // 0x1B0
    static_assert(sizeof(PhysicalCameraTrack) == 0x1B0);
}