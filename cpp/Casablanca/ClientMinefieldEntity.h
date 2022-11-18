// Object: ClientMinefieldEntity
// ClassId: 6752
// RuntimeId: 52083
// TypeInfo: 0x0000000144C55430
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientMinefieldEntity : public Entity::Entity {
        char pad_0x20[0x460];
    }; // 0x480
    static_assert(sizeof(ClientMinefieldEntity) == 0x480);
}