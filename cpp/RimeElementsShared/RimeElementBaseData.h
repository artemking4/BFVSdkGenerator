// Object: RimeElementBaseData
// ClassId: 3633
// RuntimeId: 41624
// TypeInfo: 0x0000000144F2B490
#include "../GameShared/UIElementEntityData.h"
#include "../RimeElementsShared/RimeAxisLayoutData.h"
#include "../Global/Boolean.h"

namespace RimeElementsShared {
    class RimeElementBaseData : public GameShared::UIElementEntityData {
        RimeElementsShared::RimeAxisLayoutData HorizontalLayout; // 0xD0
        RimeElementsShared::RimeAxisLayoutData VerticalLayout; // 0xE8
        Boolean FitWidthToContent; // 0x100
        Boolean FitHeightToContent; // 0x101
        char pad_0x102[0xE];
    }; // 0x110
    static_assert(sizeof(RimeElementBaseData) == 0x110);
}