// Object: ClientDoorEntity
// ClassId: 6677
// RuntimeId: 42885
// TypeInfo: 0x0000000144C8FED0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDoorEntity : public Entity::Entity {
        char pad_0x20[0x210];
    }; // 0x230
    static_assert(sizeof(ClientDoorEntity) == 0x230);
}