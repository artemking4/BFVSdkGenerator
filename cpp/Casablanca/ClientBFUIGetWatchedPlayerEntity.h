// Object: ClientBFUIGetWatchedPlayerEntity
// ClassId: 6472
// RuntimeId: 58225
// TypeInfo: 0x0000000144CBEBE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetWatchedPlayerEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIGetWatchedPlayerEntity) == 0x48);
}