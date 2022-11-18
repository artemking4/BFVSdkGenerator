// Object: ClientBFUIGetAvailableBodiesEntity
// ClassId: 6411
// RuntimeId: 56539
// TypeInfo: 0x0000000144CC67F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableBodiesEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientBFUIGetAvailableBodiesEntity) == 0x80);
}