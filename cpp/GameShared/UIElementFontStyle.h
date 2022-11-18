// Object: UIElementFontStyle
// ClassId: 880
// RuntimeId: 10625
// TypeInfo: 0x0000000144E95B30
#include "../Core/Asset.h"
#include "../GameShared/UIElementFontDefinition.h"
#include "../GameShared/UIElementFontDefinitionOverride.h"
#include "../GameShared/UIElementColor.h"

#pragma pack(push, 16)
namespace GameShared {
    class UIElementFontStyle : public Core::Asset {
        GameShared::UIElementFontDefinition Hd; // 0x20
        char pad_0x28[0x8];
        GameShared::UIElementColor Color; // 0x30
        GameShared::UIElementFontDefinition Sd; // 0x50
        Array<GameShared::UIElementFontDefinitionOverride> LanguageOverrides; // 0x58
    }; // 0x60
    static_assert(sizeof(UIElementFontStyle) == 0x60);
}
#pragma pack(pop)