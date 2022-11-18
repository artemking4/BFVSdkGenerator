// Object: ClientStaticModelPhysicsComponent
// ClassId: 6127
// RuntimeId: 45435
// TypeInfo: 0x0000000144E430F0
#include "../Physics/PartPhysicsComponent.h"

namespace GameClient {
    class ClientStaticModelPhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x28];
    }; // 0xD0
    static_assert(sizeof(ClientStaticModelPhysicsComponent) == 0xD0);
}