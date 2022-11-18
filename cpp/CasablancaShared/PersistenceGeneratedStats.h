// Object: PersistenceGeneratedStats
// ClassId: 842
// RuntimeId: 51395
// TypeInfo: 0x0000000144DA2D00
#include "../CasablancaShared/StatsList.h"
#include "../CasablancaShared/PersistenceWeaponConfigurations.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceGeneratedStats : public CasablancaShared::StatsList {
        Array<CasablancaShared::PersistenceWeaponConfigurations> PersistenceWeaponConfigurations; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceGeneratedStats) == 0x28);
}
#pragma pack(pop)