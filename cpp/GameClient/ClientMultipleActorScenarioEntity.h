// Object: ClientMultipleActorScenarioEntity
// ClassId: 6756
// RuntimeId: 9654
// TypeInfo: 0x0000000144E3FAC0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientMultipleActorScenarioEntity : public Entity::Entity {
        char pad_0x20[0x1A0];
    }; // 0x1C0
    static_assert(sizeof(ClientMultipleActorScenarioEntity) == 0x1C0);
}