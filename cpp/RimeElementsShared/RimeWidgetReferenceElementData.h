// Object: RimeWidgetReferenceElementData
// ClassId: 3959
// RuntimeId: 20893
// TypeInfo: 0x0000000144F2B390
#include "../GameShared/UIElementWidgetReferenceEntityData.h"
#include "../RimeElementsShared/RimeAxisLayoutData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeWidgetReferenceElementData : public GameShared::UIElementWidgetReferenceEntityData {
        RimeElementsShared::RimeAxisLayoutData HorizontalLayout; // 0x140
        RimeElementsShared::RimeAxisLayoutData VerticalLayout; // 0x158
        Boolean FitWidthToContent; // 0x170
        Boolean FitHeightToContent; // 0x171
        char pad_0x172[0xE];
    }; // 0x180
    static_assert(sizeof(RimeWidgetReferenceElementData) == 0x180);
}
#pragma pack(pop)