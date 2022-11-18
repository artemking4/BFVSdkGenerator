// Object: BFClientSoldierPhysicsComponent
// ClassId: 6106
// RuntimeId: 21410
// TypeInfo: 0x0000000144C562E0
#include "../Soldier/ClientSoldierPhysicsComponent.h"

namespace Casablanca {
    class BFClientSoldierPhysicsComponent : public Soldier::ClientSoldierPhysicsComponent {
        char pad_0xF0[0x10];
    }; // 0x100
    static_assert(sizeof(BFClientSoldierPhysicsComponent) == 0x100);
}