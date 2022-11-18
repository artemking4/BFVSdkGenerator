// Object: ClientMapAreaEntity
// ClassId: 6747
// RuntimeId: 37712
// TypeInfo: 0x0000000144C55540
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientMapAreaEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientMapAreaEntity) == 0x68);
}