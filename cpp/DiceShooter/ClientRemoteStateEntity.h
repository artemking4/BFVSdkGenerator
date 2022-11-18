// Object: ClientRemoteStateEntity
// ClassId: 6841
// RuntimeId: 19742
// TypeInfo: 0x0000000144DDAAA0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientRemoteStateEntity : public Entity::Entity {
        char pad_0x20[0x260];
    }; // 0x280
    static_assert(sizeof(ClientRemoteStateEntity) == 0x280);
}