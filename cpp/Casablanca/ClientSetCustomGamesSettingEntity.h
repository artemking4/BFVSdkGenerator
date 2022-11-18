// Object: ClientSetCustomGamesSettingEntity
// ClassId: 6851
// RuntimeId: 17692
// TypeInfo: 0x0000000144C54AA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSetCustomGamesSettingEntity : public Entity::Entity {
        char pad_0x20[0x1C8];
    }; // 0x1E8
    static_assert(sizeof(ClientSetCustomGamesSettingEntity) == 0x1E8);
}