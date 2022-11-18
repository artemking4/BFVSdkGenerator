// Object: ClientBFUIGetNextUIObjectEntity
// ClassId: 6431
// RuntimeId: 33229
// TypeInfo: 0x0000000144CC5910
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetNextUIObjectEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientBFUIGetNextUIObjectEntity) == 0xC0);
}