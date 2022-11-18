// Object: ClientXBoneSystemCommandStatusEntity
// ClassId: 7061
// RuntimeId: 46525
// TypeInfo: 0x0000000144C92820
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientXBoneSystemCommandStatusEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientXBoneSystemCommandStatusEntity) == 0x30);
}