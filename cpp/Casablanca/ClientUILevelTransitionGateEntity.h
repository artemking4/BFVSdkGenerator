// Object: ClientUILevelTransitionGateEntity
// ClassId: 6963
// RuntimeId: 27154
// TypeInfo: 0x0000000144CB2510
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUILevelTransitionGateEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientUILevelTransitionGateEntity) == 0x68);
}