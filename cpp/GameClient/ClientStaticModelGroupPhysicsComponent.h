// Object: ClientStaticModelGroupPhysicsComponent
// ClassId: 6119
// RuntimeId: 24889
// TypeInfo: 0x0000000144E43170
#include "../Physics/GroupPhysicsComponent.h"

namespace GameClient {
    class ClientStaticModelGroupPhysicsComponent : public Physics::GroupPhysicsComponent {
        char pad_0xA0[0x28];
    }; // 0xC8
    static_assert(sizeof(ClientStaticModelGroupPhysicsComponent) == 0xC8);
}