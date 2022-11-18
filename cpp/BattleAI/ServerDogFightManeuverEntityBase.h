// Object: ServerDogFightManeuverEntityBase
// ClassId: 7506
// RuntimeId: 33654
// TypeInfo: 0x0000000144BF7E70
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerDogFightManeuverEntityBase : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerDogFightManeuverEntityBase) == 0x50);
}