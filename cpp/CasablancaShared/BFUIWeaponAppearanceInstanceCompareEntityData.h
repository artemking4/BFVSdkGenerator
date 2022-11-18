// Object: BFUIWeaponAppearanceInstanceCompareEntityData
// ClassId: 2322
// RuntimeId: 2062
// TypeInfo: 0x0000000144D80D20
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIWeaponAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceInstanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIWeaponAppearanceInstanceObject A; // 0x28
        CasablancaShared::BFUIWeaponAppearanceInstanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIWeaponAppearanceInstanceCompareEntityData) == 0x38);
}
#pragma pack(pop)