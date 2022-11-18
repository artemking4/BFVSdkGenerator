// Object: ClientUIDeployUtilEntity
// ClassId: 6938
// RuntimeId: 54962
// TypeInfo: 0x0000000144CA15C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIDeployUtilEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientUIDeployUtilEntity) == 0x90);
}