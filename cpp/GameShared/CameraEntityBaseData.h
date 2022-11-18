// Object: CameraEntityBaseData
// ClassId: 3269
// RuntimeId: 24884
// TypeInfo: 0x0000000144E835C0
#include "../Entity/SpatialEntityData.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../RenderBase/LocalPlayerViewId.h"
#include "../Global/Boolean.h"
#include "../GameShared/CameraBodyPreset.h"
#include "../GameShared/CameraLensPreset.h"
#include "../Global/Float32.h"
#include "../GameShared/ExposureMode.h"

#pragma pack(push, 16)
namespace GameShared {
    class CameraEntityBaseData : public Entity::SpatialEntityData {
        CString NameId; // 0x60
        Int32 Priority; // 0x68
        RenderBase::LocalPlayerViewId ViewId; // 0x6C
        GameShared::CameraBodyPreset PhysicalCameraBody; // 0x70
        GameShared::CameraLensPreset PhysicalCameraLens; // 0x78
        Float32 FocalLength; // 0x80
        Float32 FocusDistance; // 0x84
        Float32 ExposureCompensation; // 0x88
        Float32 Aperture; // 0x8C
        Float32 ShutterSpeed; // 0x90
        GameShared::ExposureMode ExposureMode; // 0x94
        Float32 EV; // 0x98
        Float32 ISO; // 0x9C
        Float32 SpotMeterScale; // 0xA0
        Float32 LensBreathingScale; // 0xA4
        Boolean Enabled; // 0xA8
        char pad_0xA9[0x7];
    }; // 0xB0
    static_assert(sizeof(CameraEntityBaseData) == 0xB0);
}
#pragma pack(pop)