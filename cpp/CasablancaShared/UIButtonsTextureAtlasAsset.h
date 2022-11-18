// Object: UIButtonsTextureAtlasAsset
// ClassId: 869
// RuntimeId: 20340
// TypeInfo: 0x0000000144D21BF0
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIAxesButtonTexture.h"
#include "../CasablancaShared/UIPadButtonTexture.h"
#include "../CasablancaShared/UIPlatformOverrideTextures.h"
#include "../CasablancaShared/UIKeysButtonTexture.h"
#include "../CasablancaShared/UIMouseButtonTexture.h"
#include "../CasablancaShared/UIKeysButtonTextureByLanguage.h"
#include "../CasablancaShared/UITextureAtlasInfo.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIButtonsTextureAtlasAsset : public Core::Asset {
        Array<CasablancaShared::UIAxesButtonTexture> AxesTextures; // 0x20
        Array<CasablancaShared::UIPadButtonTexture> PadTextures; // 0x28
        CasablancaShared::UIPlatformOverrideTextures XenonOverrideTextures; // 0x30
        CasablancaShared::UIPlatformOverrideTextures Ps3OverrideTextures; // 0x40
        CasablancaShared::UIPlatformOverrideTextures Gen4aOverrideTextures; // 0x50
        CasablancaShared::UIPlatformOverrideTextures Gen4bOverrideTextures; // 0x60
        Array<CasablancaShared::UIKeysButtonTexture> KeysTextures; // 0x70
        Array<CasablancaShared::UIMouseButtonTexture> MouseTextures; // 0x78
        Array<CasablancaShared::UIKeysButtonTextureByLanguage> KeysTexturesByLanguage; // 0x80
        CasablancaShared::UITextureAtlasInfo EmptyIconTexture; // 0x88
        Render::TextureAsset TextureAtlas; // 0x98
        Boolean OnDemandEnable; // 0xA0
        char pad_0xA1[0x7];
    }; // 0xA8
    static_assert(sizeof(UIButtonsTextureAtlasAsset) == 0xA8);
}
#pragma pack(pop)