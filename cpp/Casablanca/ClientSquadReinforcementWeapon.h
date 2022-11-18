// Object: ClientSquadReinforcementWeapon
// ClassId: 8677
// RuntimeId: 5245
// TypeInfo: 0x0000000144C84820
#include "../Casablanca/ClientStrikeDesignatorWeapon.h"

namespace Casablanca {
    class ClientSquadReinforcementWeapon : public Casablanca::ClientStrikeDesignatorWeapon {
        char pad_0xF80[0x30];
    }; // 0xFB0
    static_assert(sizeof(ClientSquadReinforcementWeapon) == 0xFB0);
}