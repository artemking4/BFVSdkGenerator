// Object: BFUIHudShakeOutputEntity
// ClassId: 6248
// RuntimeId: 32950
// TypeInfo: 0x0000000144CADF90
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFUIHudShakeOutputEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(BFUIHudShakeOutputEntity) == 0x50);
}