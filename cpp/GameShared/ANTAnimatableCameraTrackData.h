// Object: ANTAnimatableCameraTrackData
// ClassId: 4003
// RuntimeId: 29514
// TypeInfo: 0x0000000144E9E4D0
#include "../GameShared/PhysicalCameraTrackData.h"
#include "../Timeline/LayeredTransformTrackData.h"
#include "../GameShared/ANTControlTrackData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTAnimatableCameraTrackData : public GameShared::PhysicalCameraTrackData {
        Timeline::LayeredTransformTrackData LayeredTransformTrack; // 0x50
        GameShared::ANTControlTrackData AntControlTrack; // 0x58
        Ant::AntRef CameraActor; // 0x60
        char pad_0x74[0x4];
    }; // 0x78
    static_assert(sizeof(ANTAnimatableCameraTrackData) == 0x78);
}
#pragma pack(pop)