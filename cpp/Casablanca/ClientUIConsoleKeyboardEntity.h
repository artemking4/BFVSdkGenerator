// Object: ClientUIConsoleKeyboardEntity
// ClassId: 6928
// RuntimeId: 55922
// TypeInfo: 0x0000000144C216B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIConsoleKeyboardEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUIConsoleKeyboardEntity) == 0x38);
}