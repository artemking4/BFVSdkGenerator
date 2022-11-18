// Object: ClientVoipEntity
// ClassId: 7049
// RuntimeId: 19960
// TypeInfo: 0x0000000144C4C160
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVoipEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientVoipEntity) == 0x60);
}