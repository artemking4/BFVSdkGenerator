// Object: ServerCustomizeCharacterEntity
// ClassId: 7478
// RuntimeId: 36474
// TypeInfo: 0x0000000144E5CFA0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerCustomizeCharacterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerCustomizeCharacterEntity) == 0x30);
}