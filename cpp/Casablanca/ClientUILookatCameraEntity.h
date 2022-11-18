// Object: ClientUILookatCameraEntity
// ClassId: 6967
// RuntimeId: 41867
// TypeInfo: 0x0000000144CB21E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUILookatCameraEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ClientUILookatCameraEntity) == 0xF0);
}