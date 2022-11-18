// Object: ClientJointValidationEntity
// ClassId: 6734
// RuntimeId: 20611
// TypeInfo: 0x0000000144E3FBD0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientJointValidationEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientJointValidationEntity) == 0x70);
}