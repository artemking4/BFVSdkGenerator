// Object: ClientBoomstickWeapon
// ClassId: 8650
// RuntimeId: 55887
// TypeInfo: 0x0000000144C5C150
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientBoomstickWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x30];
    }; // 0xED0
    static_assert(sizeof(ClientBoomstickWeapon) == 0xED0);
}