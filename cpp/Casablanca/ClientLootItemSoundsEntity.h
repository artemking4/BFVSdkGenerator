// Object: ClientLootItemSoundsEntity
// ClassId: 6746
// RuntimeId: 12627
// TypeInfo: 0x0000000144CD0070
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientLootItemSoundsEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientLootItemSoundsEntity) == 0xA8);
}