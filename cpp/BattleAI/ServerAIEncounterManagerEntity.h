// Object: ServerAIEncounterManagerEntity
// ClassId: 7382
// RuntimeId: 54342
// TypeInfo: 0x0000000144BFC6A0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAIEncounterManagerEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerAIEncounterManagerEntity) == 0x68);
}