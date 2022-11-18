// Object: BFClientSoldierHealthComponent
// ClassId: 6068
// RuntimeId: 18450
// TypeInfo: 0x0000000144C56360
#include "../Soldier/ClientSoldierHealthComponent.h"

namespace Casablanca {
    class BFClientSoldierHealthComponent : public Soldier::ClientSoldierHealthComponent {
        char pad_0xE8[0x768];
    }; // 0x850
    static_assert(sizeof(BFClientSoldierHealthComponent) == 0x850);
}