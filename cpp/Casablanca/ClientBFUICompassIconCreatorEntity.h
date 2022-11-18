// Object: ClientBFUICompassIconCreatorEntity
// ClassId: 6374
// RuntimeId: 9481
// TypeInfo: 0x0000000144C59590
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICompassIconCreatorEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientBFUICompassIconCreatorEntity) == 0xC0);
}