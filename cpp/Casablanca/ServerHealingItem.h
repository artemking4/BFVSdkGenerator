// Object: ServerHealingItem
// ClassId: 8696
// RuntimeId: 33009
// TypeInfo: 0x0000000144CDDF60
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerHealingItem : public Casablanca::BFServerWeapon {
        char pad_0x470[0x20];
    }; // 0x490
    static_assert(sizeof(ServerHealingItem) == 0x490);
}