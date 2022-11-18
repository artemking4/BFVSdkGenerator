// Object: UIObjectStatsDescription
// ClassId: 5433
// RuntimeId: 34694
// TypeInfo: 0x0000000144D98410
#include "../CasablancaShared/UIItemDescription.h"
#include "../CasablancaShared/UIDynamicStatKey.h"
#include "../CasablancaShared/UIDynamicStatModifierKey.h"
#include "../CasablancaShared/UIOnlineStatKey.h"

namespace CasablancaShared {
    class UIObjectStatsDescription : public CasablancaShared::UIItemDescription {
        Array<CasablancaShared::UIDynamicStatKey> DynamicStats; // 0x28
        Array<CasablancaShared::UIDynamicStatModifierKey> DynamicStatModifiers; // 0x30
        Array<CasablancaShared::UIOnlineStatKey> OnlineStats; // 0x38
    }; // 0x40
    static_assert(sizeof(UIObjectStatsDescription) == 0x40);
}