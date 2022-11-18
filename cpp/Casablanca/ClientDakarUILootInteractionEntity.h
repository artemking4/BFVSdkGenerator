// Object: ClientDakarUILootInteractionEntity
// ClassId: 6663
// RuntimeId: 40001
// TypeInfo: 0x0000000144CCFF60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDakarUILootInteractionEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientDakarUILootInteractionEntity) == 0x78);
}