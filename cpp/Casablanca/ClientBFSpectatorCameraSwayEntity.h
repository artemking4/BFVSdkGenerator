// Object: ClientBFSpectatorCameraSwayEntity
// ClassId: 6343
// RuntimeId: 7983
// TypeInfo: 0x0000000144CC1040
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorCameraSwayEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientBFSpectatorCameraSwayEntity) == 0x88);
}