// Object: PersistenceGeneratedRanks
// ClassId: 688
// RuntimeId: 38834
// TypeInfo: 0x0000000144DA2E00
#include "../DicePersistenceShared/RanksList.h"
#include "../CasablancaShared/PersistenceWeaponConfigurations.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceGeneratedRanks : public DicePersistenceShared::RanksList {
        Array<CasablancaShared::PersistenceWeaponConfigurations> PersistenceWeaponConfigurations; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceGeneratedRanks) == 0x28);
}
#pragma pack(pop)