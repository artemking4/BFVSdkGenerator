// Object: ClientBFUIGetMapAreasEntity
// ClassId: 6429
// RuntimeId: 2634
// TypeInfo: 0x0000000144C9D1B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetMapAreasEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIGetMapAreasEntity) == 0x48);
}