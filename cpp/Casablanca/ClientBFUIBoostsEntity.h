// Object: ClientBFUIBoostsEntity
// ClassId: 6366
// RuntimeId: 28644
// TypeInfo: 0x0000000144C86750
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIBoostsEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientBFUIBoostsEntity) == 0x80);
}