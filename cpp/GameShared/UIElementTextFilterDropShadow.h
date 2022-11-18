// Object: UIElementTextFilterDropShadow
// ClassId: 5394
// RuntimeId: 20566
// TypeInfo: 0x0000000144E95D30
#include "../GameShared/UIElementTextFilter.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/UIElementColor.h"

#pragma pack(push, 16)
namespace GameShared {
    class UIElementTextFilterDropShadow : public GameShared::UIElementTextFilter {
        Float32 X; // 0x18
        Float32 Y; // 0x1C
        GameShared::UIElementColor Color; // 0x20
        Float32 Strength; // 0x40
        Float32 Angle; // 0x44
        Float32 Distance; // 0x48
        Boolean KnockOut; // 0x4C
        Boolean HideObject; // 0x4D
        Boolean FineBlur; // 0x4E
        char pad_0x4F[0x1];
    }; // 0x50
    static_assert(sizeof(UIElementTextFilterDropShadow) == 0x50);
}
#pragma pack(pop)