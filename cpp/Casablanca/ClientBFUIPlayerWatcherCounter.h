// Object: ClientBFUIPlayerWatcherCounter
// ClassId: 6531
// RuntimeId: 35582
// TypeInfo: 0x0000000144CBEE00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerWatcherCounter : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientBFUIPlayerWatcherCounter) == 0x70);
}