// Object: ClientPlayerLookAtEntity
// ClassId: 6807
// RuntimeId: 47560
// TypeInfo: 0x0000000144F350B0
#include "../Entity/Entity.h"

namespace Soldier {
    class ClientPlayerLookAtEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientPlayerLookAtEntity) == 0xB0);
}