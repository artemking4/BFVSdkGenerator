// Object: ClientClearAreaTriggerEntity
// ClassId: 6634
// RuntimeId: 48069
// TypeInfo: 0x0000000144E3B980
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientClearAreaTriggerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientClearAreaTriggerEntity) == 0x30);
}