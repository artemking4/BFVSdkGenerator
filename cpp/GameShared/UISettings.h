// Object: UISettings
// ClassId: 5037
// RuntimeId: 27909
// TypeInfo: 0x0000000144E8E760
#include "../Core/SystemSettings.h"
#include "../UI/UISystemType.h"
#include "../GameShared/ProfileOptionsAsset.h"
#include "../Core/LanguageFormat.h"
#include "../Global/Boolean.h"
#include "../UI/LocalizationAsset.h"
#include "../UI/UIFontConfigurationAssetBase.h"

#pragma pack(push, 8)
namespace GameShared {
    class UISettings : public Core::SystemSettings {
        UI::UISystemType System; // 0x20
        char pad_0x24[0x4];
        GameShared::ProfileOptionsAsset ProfileOptions; // 0x28
        Core::LanguageFormat Language; // 0x30
        char pad_0x34[0x4];
        UI::LocalizationAsset Localization; // 0x38
        UI::UIFontConfigurationAssetBase FontConfiguration; // 0x40
        Boolean DrawEnable; // 0x48
        Boolean EnableJobs; // 0x49
        Boolean UseXYUITranslationOffset; // 0x4A
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(UISettings) == 0x50);
}
#pragma pack(pop)