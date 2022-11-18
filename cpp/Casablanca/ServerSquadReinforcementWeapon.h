// Object: ServerSquadReinforcementWeapon
// ClassId: 8717
// RuntimeId: 27344
// TypeInfo: 0x0000000144C207A0
#include "../Casablanca/ServerStrikeDesignatorWeapon.h"

namespace Casablanca {
    class ServerSquadReinforcementWeapon : public Casablanca::ServerStrikeDesignatorWeapon {
        char pad_0x490[0x30];
    }; // 0x4C0
    static_assert(sizeof(ServerSquadReinforcementWeapon) == 0x4C0);
}