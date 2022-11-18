// Object: ClientSoldierWeaponPlayerAbility
// ClassId: 8396
// RuntimeId: 55964
// TypeInfo: 0x0000000144DCD5F0
#include "../DiceShooter/ClientBasicPlayerAbility.h"

namespace DiceShooter {
    class ClientSoldierWeaponPlayerAbility : public DiceShooter::ClientBasicPlayerAbility {
        char pad_0x258[0x68];
    }; // 0x2C0
    static_assert(sizeof(ClientSoldierWeaponPlayerAbility) == 0x2C0);
}