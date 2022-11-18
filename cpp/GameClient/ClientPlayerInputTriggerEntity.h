// Object: ClientPlayerInputTriggerEntity
// ClassId: 6805
// RuntimeId: 20606
// TypeInfo: 0x0000000144E3B760
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientPlayerInputTriggerEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientPlayerInputTriggerEntity) == 0x80);
}