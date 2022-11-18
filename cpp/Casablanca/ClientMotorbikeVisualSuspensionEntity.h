// Object: ClientMotorbikeVisualSuspensionEntity
// ClassId: 6754
// RuntimeId: 51838
// TypeInfo: 0x0000000144CB64A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientMotorbikeVisualSuspensionEntity : public Entity::Entity {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(ClientMotorbikeVisualSuspensionEntity) == 0x140);
}