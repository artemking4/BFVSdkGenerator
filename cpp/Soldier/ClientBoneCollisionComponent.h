// Object: ClientBoneCollisionComponent
// ClassId: 5793
// RuntimeId: 8324
// TypeInfo: 0x0000000144F36760
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientBoneCollisionComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xD0];
    }; // 0x108
    static_assert(sizeof(ClientBoneCollisionComponent) == 0x108);
}