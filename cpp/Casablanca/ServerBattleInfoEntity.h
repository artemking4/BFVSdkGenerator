// Object: ServerBattleInfoEntity
// ClassId: 7453
// RuntimeId: 1943
// TypeInfo: 0x0000000144C62130
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerBattleInfoEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerBattleInfoEntity) == 0x58);
}