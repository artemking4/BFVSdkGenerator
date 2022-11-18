// Object: ClientBFUIGetWeaponInfoEntity
// ClassId: 6476
// RuntimeId: 2403
// TypeInfo: 0x0000000144CBFCF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetWeaponInfoEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientBFUIGetWeaponInfoEntity) == 0xA8);
}