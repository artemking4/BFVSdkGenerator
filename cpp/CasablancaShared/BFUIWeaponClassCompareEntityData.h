// Object: BFUIWeaponClassCompareEntityData
// ClassId: 2324
// RuntimeId: 3642
// TypeInfo: 0x0000000144D80F20
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIWeaponClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponClassCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIWeaponClassObject A; // 0x28
        CasablancaShared::BFUIWeaponClassObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIWeaponClassCompareEntityData) == 0x38);
}
#pragma pack(pop)