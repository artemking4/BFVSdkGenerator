// Object: TargetCameraData
// ClassId: 1680
// RuntimeId: 1828
// TypeInfo: 0x0000000144E83A40
#include "../GameShared/CameraData.h"
#include "../GameShared/HudData.h"

#pragma pack(push, 16)
namespace GameShared {
    class TargetCameraData : public GameShared::CameraData {
        Array<GameShared::HudData> Hud; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(TargetCameraData) == 0x90);
}
#pragma pack(pop)