// Object: BFUIButtonSoundStyle
// ClassId: 166
// RuntimeId: 3850
// TypeInfo: 0x0000000144D88BA0
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../CasablancaShared/BFUINavigationEventTypeAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIButtonSoundStyle : public CasablancaShared::BFUILegacyElementStyle {
        CasablancaShared::BFUINavigationEventTypeAsset ButtonPressEvent; // 0x20
        CasablancaShared::BFUINavigationEventTypeAsset ButtonFocusReceivedEvent; // 0x28
        CasablancaShared::BFUINavigationEventTypeAsset ButtonFocusLostEvent; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIButtonSoundStyle) == 0x38);
}
#pragma pack(pop)