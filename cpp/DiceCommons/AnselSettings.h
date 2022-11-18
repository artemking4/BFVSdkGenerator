// Object: AnselSettings
// ClassId: 4957
// RuntimeId: 59578
// TypeInfo: 0x0000000144DA7920
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class AnselSettings : public Core::SystemSettings {
        Float32 ConfigTranslationalSpeedInWorldUnitsPerSecond; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 ConfigRight; // 0x30
        Core::Vec3 ConfigUp; // 0x40
        Core::Vec3 ConfigForward; // 0x50
        Core::Vec3 CameraOffsetFPS; // 0x60
        Float32 ConfigRotationalSpeedInDegreesPerSecond; // 0x70
        Float32 ConfigMetersInWorldUnit; // 0x74
        Uint32 ConfigCaptureLatency; // 0x78
        Uint32 ConfigCaptureSettleLatency; // 0x7C
        CString ConfigTitleNameUtf8; // 0x80
        Float32 SessionConfigMaximumFovInDegrees; // 0x88
        Float32 CameraRadius; // 0x8C
        Float32 CameraMaxWanderDistance; // 0x90
        Int32 CameraPriority; // 0x94
        Boolean Enable; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(AnselSettings) == 0xA0);
}
#pragma pack(pop)