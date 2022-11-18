// Object: ClientPLMRestoreGameStateEntity
// ClassId: 6771
// RuntimeId: 20667
// TypeInfo: 0x0000000144C94720
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPLMRestoreGameStateEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientPLMRestoreGameStateEntity) == 0x30);
}