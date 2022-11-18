// Object: ClientSecondaryStreamingViewEntity
// ClassId: 6847
// RuntimeId: 55001
// TypeInfo: 0x0000000144C54DD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSecondaryStreamingViewEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientSecondaryStreamingViewEntity) == 0x58);
}