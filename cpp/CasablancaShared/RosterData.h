// Object: RosterData
// ClassId: 714
// RuntimeId: 26105
// TypeInfo: 0x0000000144D9FFE0
#include "../Core/Asset.h"
#include "../GameShared/PersistentValueTemplate.h"
#include "../CasablancaShared/TalentTreeSetup.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RosterData : public Core::Asset {
        Array<GameShared::PersistentValueTemplate> PrimaryWeaponStats; // 0x20
        Array<GameShared::PersistentValueTemplate> SoldierStats; // 0x28
        Array<GameShared::PersistentValueTemplate> VehicleStats; // 0x30
        Array<CasablancaShared::TalentTreeSetup> TalentTreesSetup; // 0x38
    }; // 0x40
    static_assert(sizeof(RosterData) == 0x40);
}
#pragma pack(pop)