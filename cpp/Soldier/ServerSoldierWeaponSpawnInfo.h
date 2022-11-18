// Object: ServerSoldierWeaponSpawnInfo
// ClassId: 8387
// RuntimeId: 33917
// TypeInfo: 0x0000000144F305B0
#include "../DiceCommons/OwnedGameComponentEntitySpawnInfo.h"

namespace Soldier {
    class ServerSoldierWeaponSpawnInfo : public DiceCommons::OwnedGameComponentEntitySpawnInfo {
        char pad_0x10[0x28];
    }; // 0x38
    static_assert(sizeof(ServerSoldierWeaponSpawnInfo) == 0x38);
}