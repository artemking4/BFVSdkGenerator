// Object: SoldierSquadSpawnAffectorAsset
// ClassId: 298
// RuntimeId: 29839
// TypeInfo: 0x0000000144D51150
#include "../DiceShooterShared/AffectorAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SoldierSquadSpawnAffectorAsset : public DiceShooterShared::AffectorAsset {
        Boolean CanSquadSpawnOnSquadLeaders; // 0x38
        Boolean MobileSquadSpawnOverride; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(SoldierSquadSpawnAffectorAsset) == 0x40);
}
#pragma pack(pop)