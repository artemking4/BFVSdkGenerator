// Object: BFUIElementTextFieldEntityData
// ClassId: 3670
// RuntimeId: 49659
// TypeInfo: 0x0000000144D9D490
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUILegacyElementText.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIAutoScroll.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedString.h"
#include "../GameShared/UIBlendMode.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementTextFieldEntityData : public CasablancaShared::BFUIElementEntityData {
        CasablancaShared::BFUILegacyElementText Text; // 0x130
        GameShared::UIElementFontStyle FontStyle; // 0x148
        GameShared::UIElementFontEffect FontEffect; // 0x150
        Float32 TextOffset; // 0x158
        Float32 AutoAdjustMaxWidth; // 0x15C
        Float32 AutoAdjustLeftPadding; // 0x160
        Float32 AutoAdjustRightPadding; // 0x164
        GameShared::UIAutoScroll AutoScroll; // 0x168
        char pad_0x16C[0x4];
        CString FieldText; // 0x170
        UIIncubatorShared::LocalizedString LocalizedText; // 0x178
        Float32 RowSpacing; // 0x180
        GameShared::UIBlendMode BlendMode; // 0x184
        Int32 ZOrder; // 0x188
        Boolean AutoAdjustWidth; // 0x18C
        Boolean ClipToRect; // 0x18D
        Boolean Password; // 0x18E
        Boolean WordWrap; // 0x18F
        Boolean PixelSnapping; // 0x190
        Boolean UseColorAsOverlay; // 0x191
        Boolean OverrideBlendMode; // 0x192
        Boolean DisableAutoLocalization; // 0x193
        char pad_0x194[0xC];
    }; // 0x1A0
    static_assert(sizeof(BFUIElementTextFieldEntityData) == 0x1A0);
}
#pragma pack(pop)