// Object: ClientBFUIGetTeamVehiclesEntity
// ClassId: 6459
// RuntimeId: 58195
// TypeInfo: 0x0000000144CC0130
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetTeamVehiclesEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIGetTeamVehiclesEntity) == 0x50);
}