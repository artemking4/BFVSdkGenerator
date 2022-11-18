// Object: SoldierCameraTrackData
// ClassId: 4005
// RuntimeId: 61261
// TypeInfo: 0x0000000144F45430
#include "../GameShared/CameraTrackData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierCameraTrackData : public GameShared::CameraTrackData {
        Float32 DefaultFov; // 0x58
        char pad_0x5C[0x4];
    }; // 0x60
    static_assert(sizeof(SoldierCameraTrackData) == 0x60);
}
#pragma pack(pop)