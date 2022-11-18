// Object: ClientUISettingsEntity
// ClassId: 6999
// RuntimeId: 60125
// TypeInfo: 0x0000000144CB49C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISettingsEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientUISettingsEntity) == 0xC0);
}