// Object: ClientSyncedTimerEntity
// ClassId: 6889
// RuntimeId: 58309
// TypeInfo: 0x0000000144DAED70
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientSyncedTimerEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ClientSyncedTimerEntity) == 0xD8);
}