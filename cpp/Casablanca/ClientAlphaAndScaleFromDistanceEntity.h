// Object: ClientAlphaAndScaleFromDistanceEntity
// ClassId: 6319
// RuntimeId: 61279
// TypeInfo: 0x0000000144C49490
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientAlphaAndScaleFromDistanceEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientAlphaAndScaleFromDistanceEntity) == 0xC0);
}