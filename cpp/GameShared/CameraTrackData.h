// Object: CameraTrackData
// ClassId: 4004
// RuntimeId: 43057
// TypeInfo: 0x0000000144E96EB0
#include "../GameShared/PhysicalCameraTrackData.h"
#include "../Timeline/LayeredTransformTrackData.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraTrackData : public GameShared::PhysicalCameraTrackData {
        Timeline::LayeredTransformTrackData LayeredTransformTrack; // 0x50
    }; // 0x58
    static_assert(sizeof(CameraTrackData) == 0x58);
}
#pragma pack(pop)