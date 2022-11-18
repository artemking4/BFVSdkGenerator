// Object: ClientBFUIPostProcessEntity
// ClassId: 6532
// RuntimeId: 24939
// TypeInfo: 0x0000000144CBE8B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPostProcessEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientBFUIPostProcessEntity) == 0x30);
}