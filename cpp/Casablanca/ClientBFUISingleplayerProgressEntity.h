// Object: ClientBFUISingleplayerProgressEntity
// ClassId: 6568
// RuntimeId: 2586
// TypeInfo: 0x0000000144CC1E90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISingleplayerProgressEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUISingleplayerProgressEntity) == 0x58);
}