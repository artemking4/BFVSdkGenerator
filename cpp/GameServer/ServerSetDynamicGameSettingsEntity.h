// Object: ServerSetDynamicGameSettingsEntity
// ClassId: 7707
// RuntimeId: 34291
// TypeInfo: 0x0000000144E59A80
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerSetDynamicGameSettingsEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerSetDynamicGameSettingsEntity) == 0x50);
}