// Object: UINPXMenuTooltipLine
// ClassId: 5448
// RuntimeId: 13638
// TypeInfo: 0x0000000144C7F500
#include "../Casablanca/UINPXLine.h"
#include "../UI/UIInputAction.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UINPXMenuTooltipLine : public Casablanca::UINPXLine {
        UI::UIInputAction InputAction; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(UINPXMenuTooltipLine) == 0x58);
}
#pragma pack(pop)