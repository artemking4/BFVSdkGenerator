// Object: ClientObjectiveEntity
// ClassId: 6764
// RuntimeId: 37345
// TypeInfo: 0x0000000144E3C640
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientObjectiveEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ClientObjectiveEntity) == 0x120);
}