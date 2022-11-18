// Object: BFUIWeaponAppearanceCompareEntityData
// ClassId: 2321
// RuntimeId: 45403
// TypeInfo: 0x0000000144D80DA0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIWeaponAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIWeaponAppearanceObject A; // 0x28
        CasablancaShared::BFUIWeaponAppearanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIWeaponAppearanceCompareEntityData) == 0x38);
}
#pragma pack(pop)