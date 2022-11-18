// Object: ClientPlayAnimationListenerEntity
// ClassId: 6790
// RuntimeId: 12473
// TypeInfo: 0x0000000144CD4E90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPlayAnimationListenerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientPlayAnimationListenerEntity) == 0x40);
}