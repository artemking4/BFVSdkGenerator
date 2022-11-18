// Object: BFServerSoldierHealthComponent
// ClassId: 6083
// RuntimeId: 60977
// TypeInfo: 0x0000000144C379A0
#include "../Soldier/ServerSoldierHealthComponent.h"

namespace Casablanca {
    class BFServerSoldierHealthComponent : public Soldier::ServerSoldierHealthComponent {
        char pad_0x98[0xB5B8];
    }; // 0xB650
    static_assert(sizeof(BFServerSoldierHealthComponent) == 0xB650);
}