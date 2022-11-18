// Object: ClientEORTimerEntity
// ClassId: 6682
// RuntimeId: 53187
// TypeInfo: 0x0000000144C9E670
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientEORTimerEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ClientEORTimerEntity) == 0xD8);
}