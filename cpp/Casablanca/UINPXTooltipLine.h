// Object: UINPXTooltipLine
// ClassId: 5451
// RuntimeId: 51153
// TypeInfo: 0x0000000144C7F580
#include "../Casablanca/UINPXLine.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UINPXTooltipLine : public Casablanca::UINPXLine {
        Int32 InputAction; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(UINPXTooltipLine) == 0x58);
}
#pragma pack(pop)