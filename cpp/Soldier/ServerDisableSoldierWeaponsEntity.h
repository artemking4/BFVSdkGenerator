// Object: ServerDisableSoldierWeaponsEntity
// ClassId: 7505
// RuntimeId: 13873
// TypeInfo: 0x0000000144F30850
#include "../Entity/Entity.h"

namespace Soldier {
    class ServerDisableSoldierWeaponsEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerDisableSoldierWeaponsEntity) == 0x58);
}