// Object: ServerSoldierWeaponPlayerAbility
// ClassId: 8403
// RuntimeId: 16159
// TypeInfo: 0x0000000144DE1CF0
#include "../DiceShooter/ServerBasicPlayerAbility.h"

namespace DiceShooter {
    class ServerSoldierWeaponPlayerAbility : public DiceShooter::ServerBasicPlayerAbility {
        char pad_0x80[0x90];
    }; // 0x110
    static_assert(sizeof(ServerSoldierWeaponPlayerAbility) == 0x110);
}