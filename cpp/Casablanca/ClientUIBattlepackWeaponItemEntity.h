// Object: ClientUIBattlepackWeaponItemEntity
// ClassId: 6916
// RuntimeId: 2766
// TypeInfo: 0x0000000144C86970
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIBattlepackWeaponItemEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientUIBattlepackWeaponItemEntity) == 0xB0);
}