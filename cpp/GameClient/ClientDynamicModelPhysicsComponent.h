// Object: ClientDynamicModelPhysicsComponent
// ClassId: 6123
// RuntimeId: 35435
// TypeInfo: 0x0000000144E40DA0
#include "../Physics/PartPhysicsComponent.h"

namespace GameClient {
    class ClientDynamicModelPhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x20];
    }; // 0xC8
    static_assert(sizeof(ClientDynamicModelPhysicsComponent) == 0xC8);
}