// Object: BFUIWeaponAppearanceSlotCompareEntityData
// ClassId: 2323
// RuntimeId: 39523
// TypeInfo: 0x0000000144D80CA0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIWeaponAppearanceSlotObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceSlotCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIWeaponAppearanceSlotObject A; // 0x28
        CasablancaShared::BFUIWeaponAppearanceSlotObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIWeaponAppearanceSlotCompareEntityData) == 0x38);
}
#pragma pack(pop)