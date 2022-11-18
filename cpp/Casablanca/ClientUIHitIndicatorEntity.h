// Object: ClientUIHitIndicatorEntity
// ClassId: 6954
// RuntimeId: 41873
// TypeInfo: 0x0000000144CAE810
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIHitIndicatorEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientUIHitIndicatorEntity) == 0x70);
}