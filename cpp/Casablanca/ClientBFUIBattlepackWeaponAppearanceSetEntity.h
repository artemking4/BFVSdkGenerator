// Object: ClientBFUIBattlepackWeaponAppearanceSetEntity
// ClassId: 6362
// RuntimeId: 57241
// TypeInfo: 0x0000000144C86A80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIBattlepackWeaponAppearanceSetEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUIBattlepackWeaponAppearanceSetEntity) == 0x68);
}