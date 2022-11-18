// Object: ClientVideoRecorderEntity
// ClassId: 7035
// RuntimeId: 44443
// TypeInfo: 0x0000000144C49E20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVideoRecorderEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientVideoRecorderEntity) == 0x30);
}