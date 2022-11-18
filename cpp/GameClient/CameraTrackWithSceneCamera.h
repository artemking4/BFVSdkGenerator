// Object: CameraTrackWithSceneCamera
// ClassId: 8587
// RuntimeId: 9534
// TypeInfo: 0x0000000144E3F510
#include "../GameClient/CameraTrackBase.h"

namespace GameClient {
    class CameraTrackWithSceneCamera : public GameClient::CameraTrackBase {
        char pad_0x70[0x68];
    }; // 0xD8
    static_assert(sizeof(CameraTrackWithSceneCamera) == 0xD8);
}