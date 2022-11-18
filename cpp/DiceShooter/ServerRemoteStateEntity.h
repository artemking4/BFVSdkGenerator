// Object: ServerRemoteStateEntity
// ClassId: 7695
// RuntimeId: 21178
// TypeInfo: 0x0000000144DD2900
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerRemoteStateEntity : public Entity::Entity {
        char pad_0x20[0x260];
    }; // 0x280
    static_assert(sizeof(ServerRemoteStateEntity) == 0x280);
}