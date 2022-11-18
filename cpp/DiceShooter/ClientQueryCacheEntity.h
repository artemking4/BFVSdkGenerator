// Object: ClientQueryCacheEntity
// ClassId: 6828
// RuntimeId: 25264
// TypeInfo: 0x0000000144DDAEE0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientQueryCacheEntity : public Entity::Entity {
        char pad_0x20[0x1E0];
    }; // 0x200
    static_assert(sizeof(ClientQueryCacheEntity) == 0x200);
}