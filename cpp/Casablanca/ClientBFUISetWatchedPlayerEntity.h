// Object: ClientBFUISetWatchedPlayerEntity
// ClassId: 6567
// RuntimeId: 54035
// TypeInfo: 0x0000000144CBECF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISetWatchedPlayerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientBFUISetWatchedPlayerEntity) == 0x30);
}