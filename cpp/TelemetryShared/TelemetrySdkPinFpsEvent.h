// Object: TelemetrySdkPinFpsEvent
// ClassId: 5068
// RuntimeId: 31687
// TypeInfo: 0x0000000144F5ACE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinFpsEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 p_loc; // 0x110
        Core::Vec3 p_dir; // 0x120
        Float32 fps; // 0x130
        Float32 threshold; // 0x134
        Uint8 FieldFlagChanged0; // 0x138
        char pad_0x139[0x7];
    }; // 0x140
    static_assert(sizeof(TelemetrySdkPinFpsEvent) == 0x140);
}
#pragma pack(pop)