// Object: UITooltipLineList
// ClassId: 5542
// RuntimeId: 39220
// TypeInfo: 0x0000000144C7EE80
#include "../Core/DataContainer.h"
#include "../Casablanca/UITooltipWidgetLine.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UITooltipLineList : public Core::DataContainer {
        Array<Casablanca::UITooltipWidgetLine> TooltipLines; // 0x18
    }; // 0x20
    static_assert(sizeof(UITooltipLineList) == 0x20);
}
#pragma pack(pop)