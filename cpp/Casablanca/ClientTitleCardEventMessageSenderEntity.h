// Object: ClientTitleCardEventMessageSenderEntity
// ClassId: 6902
// RuntimeId: 34635
// TypeInfo: 0x0000000144C4C5A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientTitleCardEventMessageSenderEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientTitleCardEventMessageSenderEntity) == 0x30);
}