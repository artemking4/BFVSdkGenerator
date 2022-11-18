// Object: UIWorldToScreenspaceWidgetData
// ClassId: 3850
// RuntimeId: 55270
// TypeInfo: 0x0000000144D9AC90
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIWorldToScreenspaceWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::LinearTransform WorldTransform; // 0x80
        Boolean StopRenderingWhenNotVisible; // 0xC0
        char pad_0xC1[0xF];
    }; // 0xD0
    static_assert(sizeof(UIWorldToScreenspaceWidgetData) == 0xD0);
}
#pragma pack(pop)