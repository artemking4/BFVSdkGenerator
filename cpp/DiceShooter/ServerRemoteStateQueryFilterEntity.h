// Object: ServerRemoteStateQueryFilterEntity
// ClassId: 7696
// RuntimeId: 48578
// TypeInfo: 0x0000000144DD27F0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerRemoteStateQueryFilterEntity : public Entity::Entity {
        char pad_0x20[0x260];
    }; // 0x280
    static_assert(sizeof(ServerRemoteStateQueryFilterEntity) == 0x280);
}