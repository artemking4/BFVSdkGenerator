// Object: ClientSquadReinforcementVOEntity
// ClassId: 6878
// RuntimeId: 13568
// TypeInfo: 0x0000000144CD7560
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSquadReinforcementVOEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientSquadReinforcementVOEntity) == 0x40);
}