// Object: UIElementTextFilterGlow
// ClassId: 5395
// RuntimeId: 21222
// TypeInfo: 0x0000000144E95CB0
#include "../GameShared/UIElementTextFilter.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/UIElementColor.h"

#pragma pack(push, 16)
namespace GameShared {
    class UIElementTextFilterGlow : public GameShared::UIElementTextFilter {
        Float32 X; // 0x18
        Float32 Y; // 0x1C
        GameShared::UIElementColor Color; // 0x20
        Float32 Strength; // 0x40
        Boolean KnockOut; // 0x44
        Boolean HideObject; // 0x45
        Boolean FineBlur; // 0x46
        char pad_0x47[0x9];
    }; // 0x50
    static_assert(sizeof(UIElementTextFilterGlow) == 0x50);
}
#pragma pack(pop)