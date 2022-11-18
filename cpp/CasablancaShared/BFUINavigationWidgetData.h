// Object: BFUINavigationWidgetData
// ClassId: 3801
// RuntimeId: 64534
// TypeInfo: 0x0000000144D96C10
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIDeepLinkTargetAsset.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUINavigationWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        CasablancaShared::BFUIDeepLinkTargetAsset NavigationState; // 0x80
        Int32 SelectionInput; // 0x88
        Boolean PassThroughElements; // 0x8C
        Boolean TriggerSelectionChangedOnInitialValue; // 0x8D
        Boolean RestoreNavigationState; // 0x8E
        Boolean AutoSelectionOnInit; // 0x8F
    }; // 0x90
    static_assert(sizeof(BFUINavigationWidgetData) == 0x90);
}
#pragma pack(pop)