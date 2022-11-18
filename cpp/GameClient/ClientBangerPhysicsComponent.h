// Object: ClientBangerPhysicsComponent
// ClassId: 6122
// RuntimeId: 4821
// TypeInfo: 0x0000000144E40E20
#include "../Physics/PartPhysicsComponent.h"

namespace GameClient {
    class ClientBangerPhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x20];
    }; // 0xC8
    static_assert(sizeof(ClientBangerPhysicsComponent) == 0xC8);
}