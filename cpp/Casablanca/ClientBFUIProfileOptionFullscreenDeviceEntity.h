// Object: ClientBFUIProfileOptionFullscreenDeviceEntity
// ClassId: 6545
// RuntimeId: 61041
// TypeInfo: 0x0000000144CBCCB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIProfileOptionFullscreenDeviceEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIProfileOptionFullscreenDeviceEntity) == 0x60);
}