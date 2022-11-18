// Object: ClientSimplePlaneControlsEntity
// ClassId: 6855
// RuntimeId: 55018
// TypeInfo: 0x0000000144CD7DE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSimplePlaneControlsEntity : public Entity::Entity {
        char pad_0x20[0x1F0];
    }; // 0x210
    static_assert(sizeof(ClientSimplePlaneControlsEntity) == 0x210);
}