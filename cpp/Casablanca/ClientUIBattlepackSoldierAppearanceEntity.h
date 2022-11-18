// Object: ClientUIBattlepackSoldierAppearanceEntity
// ClassId: 6913
// RuntimeId: 38948
// TypeInfo: 0x0000000144C86DB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIBattlepackSoldierAppearanceEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientUIBattlepackSoldierAppearanceEntity) == 0x78);
}