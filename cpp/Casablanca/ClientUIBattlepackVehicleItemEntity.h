// Object: ClientUIBattlepackVehicleItemEntity
// ClassId: 6915
// RuntimeId: 32892
// TypeInfo: 0x0000000144C86B90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIBattlepackVehicleItemEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientUIBattlepackVehicleItemEntity) == 0xD0);
}