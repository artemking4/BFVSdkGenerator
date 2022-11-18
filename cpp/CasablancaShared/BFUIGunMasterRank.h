// Object: BFUIGunMasterRank
// ClassId: 1212
// RuntimeId: 12794
// TypeInfo: 0x0000000144D9C590
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIWeaponObject.h"
#include "../CasablancaShared/BFUIPlayerList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGunMasterRank : public Core::DataContainer {
        Int32 Rank; // 0x18
        Int32 KillsNeeded; // 0x1C
        CasablancaShared::BFUIWeaponObject Weapon; // 0x20
        CasablancaShared::BFUIPlayerList PlayersOnRank; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGunMasterRank) == 0x30);
}
#pragma pack(pop)