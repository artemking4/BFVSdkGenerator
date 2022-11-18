// Object: ClientBFUICoopPlayerReadyEntity
// ClassId: 6378
// RuntimeId: 62888
// TypeInfo: 0x0000000144C9D2C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICoopPlayerReadyEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUICoopPlayerReadyEntity) == 0x40);
}