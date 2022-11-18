// Object: ServerOwnerToQueryResultEntity
// ClassId: 7609
// RuntimeId: 32715
// TypeInfo: 0x0000000144DD2E50
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerOwnerToQueryResultEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ServerOwnerToQueryResultEntity) == 0xB0);
}