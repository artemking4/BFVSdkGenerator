// Object: ClientSoldierWeaponSpawnInfo
// ClassId: 8386
// RuntimeId: 12741
// TypeInfo: 0x0000000144F347B0
#include "../DiceCommons/OwnedGameComponentEntitySpawnInfo.h"

namespace Soldier {
    class ClientSoldierWeaponSpawnInfo : public DiceCommons::OwnedGameComponentEntitySpawnInfo {
        char pad_0x10[0x30];
    }; // 0x40
    static_assert(sizeof(ClientSoldierWeaponSpawnInfo) == 0x40);
}