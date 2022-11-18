// Object: ClientExitReasonEntity
// ClassId: 6692
// RuntimeId: 47924
// TypeInfo: 0x0000000144C9CD70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientExitReasonEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientExitReasonEntity) == 0x30);
}