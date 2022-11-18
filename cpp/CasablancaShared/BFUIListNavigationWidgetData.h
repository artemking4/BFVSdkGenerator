// Object: BFUIListNavigationWidgetData
// ClassId: 3802
// RuntimeId: 41314
// TypeInfo: 0x0000000144D96A90
#include "../CasablancaShared/BFUINavigationWidgetData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIListNavigationWidgetData : public CasablancaShared::BFUINavigationWidgetData {
        Float32 YOffset; // 0x90
        Boolean Wrap; // 0x94
        char pad_0x95[0xB];
    }; // 0xA0
    static_assert(sizeof(BFUIListNavigationWidgetData) == 0xA0);
}
#pragma pack(pop)