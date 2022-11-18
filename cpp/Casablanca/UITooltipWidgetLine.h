// Object: UITooltipWidgetLine
// ClassId: 5543
// RuntimeId: 47407
// TypeInfo: 0x0000000144C7EF00
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIInputActionAxisDisplay.h"
#include "../GameShared/InputConceptIdentifiers.h"
#include "../CasablancaShared/BFUILayoutHorizontalAlignment.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UITooltipWidgetLine : public Core::DataContainer {
        CString StringId; // 0x18
        CasablancaShared::UIInputActionAxisDisplay Axis; // 0x20
        GameShared::InputConceptIdentifiers InputConcept; // 0x24
        CasablancaShared::BFUILayoutHorizontalAlignment HorizontalAlignment; // 0x28
        Boolean HideWhenMissingIcon; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(UITooltipWidgetLine) == 0x30);
}
#pragma pack(pop)