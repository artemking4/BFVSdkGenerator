// Object: ClientPlayerHeightEntity
// ClassId: 6804
// RuntimeId: 40940
// TypeInfo: 0x0000000144C47C20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPlayerHeightEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientPlayerHeightEntity) == 0x60);
}