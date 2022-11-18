// Object: BFUIElement3SliceStatbarAlignedStyle
// ClassId: 169
// RuntimeId: 8915
// TypeInfo: 0x0000000144D9CD90
#include "../CasablancaShared/BFUIElement3SliceStatbarStyle.h"
#include "../GameShared/UIElementAlignment.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIElementColor.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElement3SliceStatbarAlignedStyle : public CasablancaShared::BFUIElement3SliceStatbarStyle {
        GameShared::UIElementAlignment HorizontalAlignment; // 0x58
        Boolean Vertical; // 0x5C
        Boolean Invert; // 0x5D
        char pad_0x5E[0x2];
        GameShared::UIElementColor Color; // 0x60
    }; // 0x80
    static_assert(sizeof(BFUIElement3SliceStatbarAlignedStyle) == 0x80);
}
#pragma pack(pop)