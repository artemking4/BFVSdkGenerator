// Object: UIButtonBarWidgetData
// ClassId: 3810
// RuntimeId: 17008
// TypeInfo: 0x0000000144D9BB10
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIElementColor.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIButtonBarWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        GameShared::UIElementColor EnabledColor; // 0x80
        GameShared::UIElementColor DisabledColor; // 0xA0
        Float32 ButtonAndTextSeparation; // 0xC0
        Float32 EntrySeparation; // 0xC4
        Float32 TextYOffset; // 0xC8
        char pad_0xCC[0x4];
        GameShared::UIElementFontStyle FontStyle; // 0xD0
        GameShared::UIElementFontEffect FontEffect; // 0xD8
        Boolean CenterButtons; // 0xE0
        char pad_0xE1[0xF];
    }; // 0xF0
    static_assert(sizeof(UIButtonBarWidgetData) == 0xF0);
}
#pragma pack(pop)