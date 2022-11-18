// Object: UIVehicleStatsDescription
// ClassId: 5437
// RuntimeId: 33781
// TypeInfo: 0x0000000144D98190
#include "../CasablancaShared/UIObjectStatsDescription.h"
#include "../CasablancaShared/UIDynamicIntRangeStatKey.h"
#include "../CasablancaShared/UIDynamicIntOfStatKey.h"
#include "../CasablancaShared/UIDynamicStringArrayStatKey.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVehicleStatsDescription : public CasablancaShared::UIObjectStatsDescription {
        CasablancaShared::UIDynamicIntRangeStatKey Acceleration; // 0x40
        CasablancaShared::UIDynamicIntRangeStatKey Defensiveness; // 0x48
        CasablancaShared::UIDynamicIntRangeStatKey Offensiveness; // 0x50
        CasablancaShared::UIDynamicIntOfStatKey Seats; // 0x58
        CasablancaShared::UIDynamicIntRangeStatKey EngagementRange; // 0x60
        CasablancaShared::UIDynamicStringArrayStatKey Targets; // 0x68
    }; // 0x70
    static_assert(sizeof(UIVehicleStatsDescription) == 0x70);
}
#pragma pack(pop)