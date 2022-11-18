// Object: ClientSoldierWeapon
// ClassId: 7892
// RuntimeId: 15173
// TypeInfo: 0x0000000144F34260
#include "../DiceCommons/ClientOwnedGameComponentEntity.h"

namespace Soldier {
    class ClientSoldierWeapon : public DiceCommons::ClientOwnedGameComponentEntity {
        char pad_0x198[0x5E88];
    }; // 0x6020
    static_assert(sizeof(ClientSoldierWeapon) == 0x6020);
}