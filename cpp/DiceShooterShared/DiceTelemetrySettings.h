// Object: DiceTelemetrySettings
// ClassId: 4980
// RuntimeId: 13035
// TypeInfo: 0x0000000144DF12D0
#include "../Core/SystemSettings.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class DiceTelemetrySettings : public Core::SystemSettings {
        Uint32 DataMajorVersion; // 0x20
        Uint32 DataMinorVersion; // 0x24
        Uint32 ClientFileVariationCount; // 0x28
        Float32 ClientTelemetryUpdateInterval; // 0x2C
        Int32 VerbosityLevel; // 0x30
        char pad_0x34[0x4];
        Array<CString> BlazeMetricValues; // 0x38
        Boolean EnableClientTelemetry; // 0x40
        Boolean EnableServerTelemetry; // 0x41
        Boolean ClientOutputFile; // 0x42
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(DiceTelemetrySettings) == 0x48);
}
#pragma pack(pop)