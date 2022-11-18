// Object: ClientUIScoringEntity
// ClassId: 6989
// RuntimeId: 39253
// TypeInfo: 0x0000000144C89980
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIScoringEntity : public Entity::Entity {
        char pad_0x20[0x1B8];
    }; // 0x1D8
    static_assert(sizeof(ClientUIScoringEntity) == 0x1D8);
}