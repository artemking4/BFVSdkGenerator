// Object: ClientRemoteStateQueryFilterEntity
// ClassId: 6842
// RuntimeId: 59643
// TypeInfo: 0x0000000144DDA990
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientRemoteStateQueryFilterEntity : public Entity::Entity {
        char pad_0x20[0x260];
    }; // 0x280
    static_assert(sizeof(ClientRemoteStateQueryFilterEntity) == 0x280);
}