// Object: SpartaExtensionSettings
// ClassId: 5025
// RuntimeId: 29208
// TypeInfo: 0x0000000144F4F8C0
#include "../Core/SystemSettings.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaExtensionSettings : public Core::SystemSettings {
        CString GatewayHost; // 0x20
        CString ServiceOverride; // 0x28
        CString SpartaSuperBundleAssetPath; // 0x30
        CString SpartaBundleAssePath; // 0x38
        CString FeatureFlags; // 0x40
        Boolean OnlineDebugEnabled; // 0x48
        Boolean OriginAccountAssocWorkaroundsEnabled; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(SpartaExtensionSettings) == 0x50);
}
#pragma pack(pop)