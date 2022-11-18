// Object: ClientBreakableModelPhysicsComponent
// ClassId: 6116
// RuntimeId: 45683
// TypeInfo: 0x0000000144E34160
#include "../Physics/DestructionPhysicsComponent.h"

namespace GameClient {
    class ClientBreakableModelPhysicsComponent : public Physics::DestructionPhysicsComponent {
        char pad_0xD8[0x20];
    }; // 0xF8
    static_assert(sizeof(ClientBreakableModelPhysicsComponent) == 0xF8);
}