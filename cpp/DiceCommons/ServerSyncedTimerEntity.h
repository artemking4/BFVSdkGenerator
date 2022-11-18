// Object: ServerSyncedTimerEntity
// ClassId: 7742
// RuntimeId: 6065
// TypeInfo: 0x0000000144DAA6C0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ServerSyncedTimerEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ServerSyncedTimerEntity) == 0xF0);
}