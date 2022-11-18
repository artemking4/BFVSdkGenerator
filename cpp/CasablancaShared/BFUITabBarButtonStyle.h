// Object: BFUITabBarButtonStyle
// ClassId: 175
// RuntimeId: 10090
// TypeInfo: 0x0000000144D88A20
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../CasablancaShared/BFUINavigationEventTypeAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUITabBarButtonStyle : public CasablancaShared::BFUILegacyElementStyle {
        CasablancaShared::BFUINavigationEventTypeAsset ButtonPressEvent; // 0x20
        CasablancaShared::BFUINavigationEventTypeAsset ButtonFocusReceivedEvent; // 0x28
        CasablancaShared::BFUINavigationEventTypeAsset ButtonFocusLostEvent; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUITabBarButtonStyle) == 0x38);
}
#pragma pack(pop)