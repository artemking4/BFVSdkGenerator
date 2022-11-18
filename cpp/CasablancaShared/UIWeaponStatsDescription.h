// Object: UIWeaponStatsDescription
// ClassId: 5438
// RuntimeId: 235
// TypeInfo: 0x0000000144D98310
#include "../CasablancaShared/UIObjectStatsDescription.h"
#include "../CasablancaShared/UIDynamicIntRangeStatKey.h"
#include "../CasablancaShared/UIDynamicIntValueStatKey.h"
#include "../CasablancaShared/UIDynamicIntOfStatKey.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIWeaponStatsDescription : public CasablancaShared::UIObjectStatsDescription {
        CasablancaShared::UIDynamicIntRangeStatKey Damage; // 0x40
        CasablancaShared::UIDynamicIntRangeStatKey Accuracy; // 0x48
        CasablancaShared::UIDynamicIntRangeStatKey HipFire; // 0x50
        CasablancaShared::UIDynamicIntRangeStatKey Control; // 0x58
        CasablancaShared::UIDynamicIntValueStatKey RPM; // 0x60
        CasablancaShared::UIDynamicIntValueStatKey FireModes; // 0x68
        CasablancaShared::UIDynamicIntOfStatKey Ammunition; // 0x70
    }; // 0x78
    static_assert(sizeof(UIWeaponStatsDescription) == 0x78);
}
#pragma pack(pop)