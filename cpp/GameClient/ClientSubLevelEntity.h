// Object: ClientSubLevelEntity
// ClassId: 8078
// RuntimeId: 56642
// TypeInfo: 0x0000000144E33A40
#include "../Entity/SubLevelEntity.h"

namespace GameClient {
    class ClientSubLevelEntity : public Entity::SubLevelEntity {
        char pad_0x48[0xA0];
    }; // 0xE8
    static_assert(sizeof(ClientSubLevelEntity) == 0xE8);
}