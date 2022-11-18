// Object: ClientReadAntGameStateEntity
// ClassId: 6837
// RuntimeId: 57128
// TypeInfo: 0x0000000144E3E0D0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientReadAntGameStateEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientReadAntGameStateEntity) == 0xB0);
}