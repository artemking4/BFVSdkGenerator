// Object: ServerAIProximityQueryEntity
// ClassId: 7419
// RuntimeId: 43007
// TypeInfo: 0x0000000144BF49D0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIProximityQueryEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ServerAIProximityQueryEntity) == 0x88);
}