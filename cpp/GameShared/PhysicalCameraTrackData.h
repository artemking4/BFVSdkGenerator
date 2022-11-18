// Object: PhysicalCameraTrackData
// ClassId: 4002
// RuntimeId: 19722
// TypeInfo: 0x0000000144E967B0
#include "../GameShared/CameraTrackBaseData.h"
#include "../GameShared/CameraBodyPreset.h"
#include "../GameShared/CameraLensPreset.h"
#include "../GameShared/ExposureMode.h"
#include "../Timeline/TimelineTrackData.h"

#pragma pack(push, 8)
namespace GameShared {
    class PhysicalCameraTrackData : public GameShared::CameraTrackBaseData {
        GameShared::CameraBodyPreset PhysicalCameraBody; // 0x30
        GameShared::CameraLensPreset PhysicalCameraLens; // 0x38
        GameShared::ExposureMode ExposureMode; // 0x40
        char pad_0x44[0x4];
        Array<Timeline::TimelineTrackData> Children; // 0x48
    }; // 0x50
    static_assert(sizeof(PhysicalCameraTrackData) == 0x50);
}
#pragma pack(pop)