// Object: ClientDakarUILootContainerEntity
// ClassId: 6662
// RuntimeId: 38278
// TypeInfo: 0x0000000144C48170
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDakarUILootContainerEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientDakarUILootContainerEntity) == 0x50);
}