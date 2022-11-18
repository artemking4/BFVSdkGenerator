// Object: UIMinimapVisualWidgetData
// ClassId: 3823
// RuntimeId: 16249
// TypeInfo: 0x0000000144D9BE90
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../CasablancaShared/UIVisualWidgetType.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../GameShared/UIElementColor.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIMinimapVisualWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        GameShared::UIElementColor MinimapColor; // 0x80
        GameShared::UIElementColor JointColor; // 0xA0
        GameShared::UIElementColor JointNameColor1; // 0xC0
        GameShared::UIElementColor JointNameColor2; // 0xE0
        GameShared::UIElementColor LineColor; // 0x100
        GameShared::UIElementColor AreaColor; // 0x120
        GameShared::UIElementColor SecondaryColor; // 0x140
        CasablancaShared::UIVisualWidgetType WidgetType; // 0x160
        char pad_0x164[0x4];
        CString MaskName; // 0x168
        Float32 NativeViewWidth; // 0x170
        Float32 ViewVelocityExpandFactor; // 0x174
        Float32 ViewVelocityMin; // 0x178
        Float32 ViewVelocityMax; // 0x17C
        CString JointImage; // 0x180
        GameShared::UIElementFontStyle JointNameFont; // 0x188
        GameShared::UIElementFontEffect JointNameEffect; // 0x190
        CString JointNameSequence; // 0x198
        Float32 LineWidth; // 0x1A0
        Float32 PatternWidth; // 0x1A4
        Float32 PatternSoftness; // 0x1A8
        Boolean UseStencil; // 0x1AC
        Boolean UseMask; // 0x1AD
        Boolean RenderCombatArea; // 0x1AE
        char pad_0x1AF[0x1];
    }; // 0x1B0
    static_assert(sizeof(UIMinimapVisualWidgetData) == 0x1B0);
}
#pragma pack(pop)