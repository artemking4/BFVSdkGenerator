// Object: ClientFloatSpringEntity
// ClassId: 6709
// RuntimeId: 27085
// TypeInfo: 0x0000000144CD1CD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFloatSpringEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientFloatSpringEntity) == 0x48);
}