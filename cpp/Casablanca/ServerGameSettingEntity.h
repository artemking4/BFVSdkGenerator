// Object: ServerGameSettingEntity
// ClassId: 7566
// RuntimeId: 46308
// TypeInfo: 0x0000000144C3ECA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerGameSettingEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerGameSettingEntity) == 0x60);
}