// Object: UITeamSetupWidgetData
// ClassId: 3844
// RuntimeId: 12497
// TypeInfo: 0x0000000144D9C310
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UITeamSetupWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Int32 CurrentTabSelection; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(UITeamSetupWidgetData) == 0x90);
}
#pragma pack(pop)