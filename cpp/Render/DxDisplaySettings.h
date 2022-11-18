// Object: DxDisplaySettings
// ClassId: 4966
// RuntimeId: 43009
// TypeInfo: 0x0000000144F17DD0
#include "../Render/BaseDisplaySettings.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Render {
    class DxDisplaySettings : public Render::BaseDisplaySettings {
        Array<Int32> DebugBreakIgnoredIDs; // 0xC8
        Uint32 NvidiaDx11MinDriverVersion; // 0xD0
        Uint32 NvidiaDx12MinDriverVersion; // 0xD4
        CString AmdMinDriverVersion; // 0xD8
        CString IntelMinDriverVersion; // 0xE0
        CString AmdMinDriverPackagingVersion; // 0xE8
        CString RTSSHooks64RequiredDate; // 0xF0
        CString RTSSHooks64RequiredVersionName; // 0xF8
        Boolean WarpDriverEnable; // 0x100
        Boolean DebugInfoEnable; // 0x101
        Boolean DebugInfoGpuBasedValidationEnable; // 0x102
        Boolean DebugInfoOutputEnable; // 0x103
        Boolean DebugBreakOnErrorEnable; // 0x104
        Boolean DebugBreakOnWarningEnable; // 0x105
        Boolean DebugBreakOnInfoEnable; // 0x106
        Boolean MultiGpuValidationEnable; // 0x107
        Boolean DxDiagDriverDetectionEnable; // 0x108
        Boolean NvApiEnable; // 0x109
        Boolean UavOverlapExtensionEnable; // 0x10A
        Boolean MinDriverRequired; // 0x10B
        Boolean PixProfilingEnable; // 0x10C
        Boolean NvHlslIntrinsicsEnable; // 0x10D
        Boolean CheckInjectedDlls; // 0x10E
        Boolean AllowInterlacedDisplayModes; // 0x10F
        Boolean AmdHlslIntrinsicsEnable; // 0x110
        Boolean GpuBlackBoxEnable; // 0x111
        char pad_0x112[0x6];
    }; // 0x118
    static_assert(sizeof(DxDisplaySettings) == 0x118);
}
#pragma pack(pop)