// Object: BFUIMenuListEntrySoundStyle
// ClassId: 174
// RuntimeId: 54503
// TypeInfo: 0x0000000144D88AA0
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../CasablancaShared/BFUINavigationEventTypeAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIMenuListEntrySoundStyle : public CasablancaShared::BFUILegacyElementStyle {
        CasablancaShared::BFUINavigationEventTypeAsset EntryExecuteEvent; // 0x20
        CasablancaShared::BFUINavigationEventTypeAsset EntrySelectedEvent; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIMenuListEntrySoundStyle) == 0x30);
}
#pragma pack(pop)