// Object: ClientNormalisedMapToWorldPositionEntity
// ClassId: 6760
// RuntimeId: 40370
// TypeInfo: 0x0000000144C9AB90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientNormalisedMapToWorldPositionEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientNormalisedMapToWorldPositionEntity) == 0x70);
}