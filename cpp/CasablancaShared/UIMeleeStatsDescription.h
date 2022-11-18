// Object: UIMeleeStatsDescription
// ClassId: 5435
// RuntimeId: 33806
// TypeInfo: 0x0000000144D98290
#include "../CasablancaShared/UIObjectStatsDescription.h"
#include "../CasablancaShared/UIDynamicIntRangeStatKey.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMeleeStatsDescription : public CasablancaShared::UIObjectStatsDescription {
        CasablancaShared::UIDynamicIntRangeStatKey Damage; // 0x40
    }; // 0x48
    static_assert(sizeof(UIMeleeStatsDescription) == 0x48);
}
#pragma pack(pop)