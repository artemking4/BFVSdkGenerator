// Object: ClientGameSettingEntity
// ClassId: 6718
// RuntimeId: 58371
// TypeInfo: 0x0000000144CD1AB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientGameSettingEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientGameSettingEntity) == 0x58);
}