// Object: ClientBFUISelectedSpawnSlotEntity
// ClassId: 6566
// RuntimeId: 16159
// TypeInfo: 0x0000000144CB0060
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISelectedSpawnSlotEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISelectedSpawnSlotEntity) == 0x40);
}