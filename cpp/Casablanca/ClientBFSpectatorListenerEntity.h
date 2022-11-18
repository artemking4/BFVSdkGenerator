// Object: ClientBFSpectatorListenerEntity
// ClassId: 6352
// RuntimeId: 33379
// TypeInfo: 0x0000000144CCD1D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorListenerEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFSpectatorListenerEntity) == 0x60);
}