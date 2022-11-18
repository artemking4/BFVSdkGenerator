// Object: ServerSetCustomGamesSettingEntity
// ClassId: 7706
// RuntimeId: 54539
// TypeInfo: 0x0000000144C3DED0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSetCustomGamesSettingEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(ServerSetCustomGamesSettingEntity) == 0x110);
}