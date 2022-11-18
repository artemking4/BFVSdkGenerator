// Object: ClientGetBFUISoldierInstanceName
// ClassId: 6720
// RuntimeId: 19680
// TypeInfo: 0x0000000144C47F50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientGetBFUISoldierInstanceName : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientGetBFUISoldierInstanceName) == 0x38);
}