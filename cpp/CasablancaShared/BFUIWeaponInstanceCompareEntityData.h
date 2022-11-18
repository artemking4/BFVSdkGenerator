// Object: BFUIWeaponInstanceCompareEntityData
// ClassId: 2326
// RuntimeId: 4490
// TypeInfo: 0x0000000144D80E20
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponInstanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIWeaponInstanceObject A; // 0x28
        CasablancaShared::BFUIWeaponInstanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIWeaponInstanceCompareEntityData) == 0x38);
}
#pragma pack(pop)