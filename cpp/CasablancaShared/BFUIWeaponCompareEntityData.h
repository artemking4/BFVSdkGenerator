// Object: BFUIWeaponCompareEntityData
// ClassId: 2325
// RuntimeId: 7331
// TypeInfo: 0x0000000144D80EA0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIWeaponObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIWeaponObject A; // 0x28
        CasablancaShared::BFUIWeaponObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIWeaponCompareEntityData) == 0x38);
}
#pragma pack(pop)