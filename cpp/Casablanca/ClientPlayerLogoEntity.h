// Object: ClientPlayerLogoEntity
// ClassId: 6806
// RuntimeId: 48097
// TypeInfo: 0x0000000144C54FF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPlayerLogoEntity : public Entity::Entity {
        char pad_0x20[0x3BC0];
    }; // 0x3BE0
    static_assert(sizeof(ClientPlayerLogoEntity) == 0x3BE0);
}