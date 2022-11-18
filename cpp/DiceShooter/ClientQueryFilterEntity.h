// Object: ClientQueryFilterEntity
// ClassId: 6829
// RuntimeId: 1897
// TypeInfo: 0x0000000144DDADD0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientQueryFilterEntity : public Entity::Entity {
        char pad_0x20[0x108];
    }; // 0x128
    static_assert(sizeof(ClientQueryFilterEntity) == 0x128);
}