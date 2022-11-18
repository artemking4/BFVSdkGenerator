// Object: VeniceUISettings
// ClassId: 5040
// RuntimeId: 56413
// TypeInfo: 0x0000000144CFB8D0
#include "../Core/SystemSettings.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/BFUIStaticBundlesAsset.h"
#include "../CasablancaShared/BFUISingleplayerEpisode.h"
#include "../CasablancaShared/KeybindingString.h"
#include "../CasablancaShared/SpecializationTreeAsset.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/BFUIServerSettings.h"
#include "../CasablancaShared/UINewThingSettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VeniceUISettings : public Core::SystemSettings {
        CString MetaDataAssetPath; // 0x20
        CString IMSettingsAssetPath; // 0x28
        CString LoadingTransitionTexturePath; // 0x30
        CString SavingTransitionTexturePath; // 0x38
        CString PlatformOverride; // 0x40
        CString PopupNoButtonAssetPath; // 0x48
        CString Popup1ButtonAssetPath; // 0x50
        CString Popup2ButtonAssetPath; // 0x58
        CString Popup3ButtonAssetPath; // 0x60
        CString PopupProgressBarAssetPath; // 0x68
        CString PopupPasswordAssetPath; // 0x70
        Float32 RosterSoldierLoadingHeadstart; // 0x78
        char pad_0x7C[0x4];
        CasablancaShared::BFUIStaticBundlesAsset StaticBundle; // 0x80
        Array<CasablancaShared::BFUISingleplayerEpisode> SingleplayerEpisodes; // 0x88
        Array<CasablancaShared::KeybindingString> KeybindingStrings; // 0x90
        Array<CasablancaShared::SpecializationTreeAsset> Specializations; // 0x98
        CString PostProcessSettingsPath; // 0xA0
        Uint32 DarkenTextureWidth; // 0xA8
        Uint32 DarkenTextureHeight; // 0xAC
        CasablancaShared::BFUIServerSettings ServerSettings; // 0xB0
        CasablancaShared::UINewThingSettings NewThingSettings; // 0xB8
        Boolean ShowBuildInfo; // 0xC0
        Boolean RandomizeBuildInfoLocation; // 0xC1
        Boolean HideBuildInfoOnLevel; // 0xC2
        Boolean GetStatsInOnlineFlow; // 0xC3
        Boolean IsDemoMode; // 0xC4
        Boolean ShowConnectionHUDIcons; // 0xC5
        Boolean LoadingMoviesEnabled; // 0xC6
        Boolean UseRimeFrontend; // 0xC7
        Boolean EnableFrontendDevMenu; // 0xC8
        Boolean EnableFrontendStartupMovies; // 0xC9
        Boolean UseSparta; // 0xCA
        Boolean UseDeploy3D; // 0xCB
        Boolean IsCustomizeEnabled; // 0xCC
        Boolean AutoDeployEnabled; // 0xCD
        Boolean QuitToFrontend; // 0xCE
        Boolean UseNewScoreboard; // 0xCF
        Boolean UseSquadboard; // 0xD0
        Boolean UsePrototypeHUD; // 0xD1
        Boolean IsCashTestEnabled; // 0xD2
        Boolean UseSquadSelectionFlow; // 0xD3
        Boolean UseNewCustomizationScreen; // 0xD4
        Boolean UseSchematicHitIndicator; // 0xD5
        Boolean UseOptionsPrototype; // 0xD6
        Boolean UseVehicleInfoHUD; // 0xD7
        Boolean DarkenEnable; // 0xD8
        char pad_0xD9[0x7];
    }; // 0xE0
    static_assert(sizeof(VeniceUISettings) == 0xE0);
}
#pragma pack(pop)