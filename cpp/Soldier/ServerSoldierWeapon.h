// Object: ServerSoldierWeapon
// ClassId: 7946
// RuntimeId: 46103
// TypeInfo: 0x0000000144F30420
#include "../DiceCommons/ServerOwnedGameComponentEntity.h"

namespace Soldier {
    class ServerSoldierWeapon : public DiceCommons::ServerOwnedGameComponentEntity {
        char pad_0x188[0x420];
    }; // 0x5A8
    static_assert(sizeof(ServerSoldierWeapon) == 0x5A8);
}