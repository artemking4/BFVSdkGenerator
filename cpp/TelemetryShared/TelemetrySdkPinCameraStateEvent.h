// Object: TelemetrySdkPinCameraStateEvent
// ClassId: 5056
// RuntimeId: 38915
// TypeInfo: 0x0000000144F5AE60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinCameraStateEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 cam_dur; // 0x100
        char pad_0x104[0x4];
        CString prev_cam_state; // 0x108
        Core::Vec3 p_loc; // 0x110
        CString cur_cam_state; // 0x120
        CString p_state; // 0x128
        Uint8 FieldFlagChanged0; // 0x130
        char pad_0x131[0xF];
    }; // 0x140
    static_assert(sizeof(TelemetrySdkPinCameraStateEvent) == 0x140);
}
#pragma pack(pop)