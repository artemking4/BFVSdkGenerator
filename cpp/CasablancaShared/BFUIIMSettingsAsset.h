// Object: BFUIIMSettingsAsset
// ClassId: 885
// RuntimeId: 51370
// TypeInfo: 0x0000000144D9B490
#include "../GameShared/UIIMSettingsAsset.h"
#include "../CasablancaShared/UIWorldIconConfiguration.h"
#include "../CasablancaShared/UIMinimapIconConfiguration.h"
#include "../CasablancaShared/UIMinimapIconTextureAtlasAsset.h"
#include "../CasablancaShared/UIButtonsTextureAtlasAsset.h"
#include "../CasablancaShared/UIDeployConfiguration.h"
#include "../CasablancaShared/UIAirRadarConfiguration.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"
#include "../CasablancaShared/BFUIInputModeSettings.h"
#include "../UIIncubatorShared/UIRenderTargetAtlasAsset.h"
#include "../CasablancaShared/BFUIHudShakeSettings.h"
#include "../CasablancaShared/BFUIAutoContrastSettings.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIIMSettingsAsset : public GameShared::UIIMSettingsAsset {
        char pad_0x38[0x8];
        CasablancaShared::UIWorldIconConfiguration WorldIconCfg; // 0x40
        CasablancaShared::UIMinimapIconConfiguration MapIconCfg; // 0x720
        CasablancaShared::UIMinimapIconTextureAtlasAsset IconAtlas; // 0x760
        CasablancaShared::UIButtonsTextureAtlasAsset ButtonsTextureAtlas; // 0x768
        CasablancaShared::UIDeployConfiguration DeployCfg; // 0x770
        CasablancaShared::UIAirRadarConfiguration AirRadarConfig; // 0x774
        GameShared::UIElementFontStyle KeyboardKeyFont; // 0x780
        GameShared::UIElementFontEffect KeyboardKeyFontEffect; // 0x788
        CasablancaShared::BFUIInputModeSettings InputModeSettings; // 0x790
        Array<UIIncubatorShared::UIRenderTargetAtlasAsset> RenderTargets; // 0x798
        CasablancaShared::BFUIHudShakeSettings HudShakeSettings; // 0x7A0
        CasablancaShared::BFUIAutoContrastSettings AutoContrastSettings; // 0x840
        char pad_0x844[0xC];
    }; // 0x850
    static_assert(sizeof(BFUIIMSettingsAsset) == 0x850);
}
#pragma pack(pop)