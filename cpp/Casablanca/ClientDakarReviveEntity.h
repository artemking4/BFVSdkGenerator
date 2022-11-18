// Object: ClientDakarReviveEntity
// ClassId: 6658
// RuntimeId: 64411
// TypeInfo: 0x0000000144C88810
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDakarReviveEntity : public Entity::Entity {
        char pad_0x20[0x260];
    }; // 0x280
    static_assert(sizeof(ClientDakarReviveEntity) == 0x280);
}