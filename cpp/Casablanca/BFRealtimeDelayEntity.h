// Object: BFRealtimeDelayEntity
// ClassId: 6224
// RuntimeId: 5966
// TypeInfo: 0x0000000144C979B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFRealtimeDelayEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(BFRealtimeDelayEntity) == 0x80);
}