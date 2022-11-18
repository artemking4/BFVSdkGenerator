// Object: UITooltipDescription
// ClassId: 5452
// RuntimeId: 23841
// TypeInfo: 0x0000000144C7EF80
#include "../Casablanca/UITooltipBase.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUILayoutHorizontalAlignment.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UITooltipDescription : public Casablanca::UITooltipBase {
        Int32 InputAction; // 0x48
        CasablancaShared::BFUILayoutHorizontalAlignment HorizontalAlignment; // 0x4C
        Boolean HideWhenMissingIcon; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(UITooltipDescription) == 0x58);
}
#pragma pack(pop)