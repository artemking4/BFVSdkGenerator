// Object: ClientHealingItem
// ClassId: 8658
// RuntimeId: 26686
// TypeInfo: 0x0000000144C88160
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientHealingItem : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x10];
    }; // 0xEB0
    static_assert(sizeof(ClientHealingItem) == 0xEB0);
}