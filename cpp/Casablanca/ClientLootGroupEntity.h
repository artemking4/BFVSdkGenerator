// Object: ClientLootGroupEntity
// ClassId: 7864
// RuntimeId: 21703
// TypeInfo: 0x0000000144C47E40
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientLootGroupEntity : public Entity::SpatialEntity {
        char pad_0x30[0x110];
    }; // 0x140
    static_assert(sizeof(ClientLootGroupEntity) == 0x140);
}