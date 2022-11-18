// Object: ClientUIScoringFriendlyEventEntity
// ClassId: 6990
// RuntimeId: 43751
// TypeInfo: 0x0000000144C89870
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIScoringFriendlyEventEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientUIScoringFriendlyEventEntity) == 0x40);
}