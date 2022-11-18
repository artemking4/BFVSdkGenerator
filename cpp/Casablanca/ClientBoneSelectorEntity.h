// Object: ClientBoneSelectorEntity
// ClassId: 6613
// RuntimeId: 38022
// TypeInfo: 0x0000000144C9F000
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBoneSelectorEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientBoneSelectorEntity) == 0xA8);
}