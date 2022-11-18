// Object: OriginSettings
// ClassId: 5004
// RuntimeId: 45526
// TypeInfo: 0x0000000144C1B440
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Origin {
    class OriginSettings : public Core::SystemSettings {
        CString ContentId; // 0x20
        CString Title; // 0x28
        CString MultiplayerId; // 0x30
        CString Language; // 0x38
        CString MinRequiredVersion; // 0x40
        Boolean Enabled; // 0x48
        Boolean RequiredForOnline; // 0x49
        Boolean RequireLatestForOnlineFeatures; // 0x4A
        Boolean Log; // 0x4B
        Boolean AllowProductionEnvironment; // 0x4C
        Boolean DisableInLiveEditMode; // 0x4D
        Boolean UseOIGAPI; // 0x4E
        Boolean RequireMinVersion; // 0x4F
    }; // 0x50
    static_assert(sizeof(OriginSettings) == 0x50);
}
#pragma pack(pop)