// Object: PersistenceGeneratedAwards
// ClassId: 818
// RuntimeId: 24534
// TypeInfo: 0x0000000144DA2F00
#include "../CasablancaShared/AwardDataTree.h"
#include "../CasablancaShared/PersistenceWeaponConfigurations.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceGeneratedAwards : public CasablancaShared::AwardDataTree {
        Array<CasablancaShared::PersistenceWeaponConfigurations> PersistenceWeaponConfigurations; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceGeneratedAwards) == 0x28);
}
#pragma pack(pop)