// Object: ClientUIBattlepackSoldierBodyEntity
// ClassId: 6914
// RuntimeId: 24809
// TypeInfo: 0x0000000144C86CA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIBattlepackSoldierBodyEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientUIBattlepackSoldierBodyEntity) == 0x58);
}