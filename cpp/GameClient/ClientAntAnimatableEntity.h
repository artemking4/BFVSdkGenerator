// Object: ClientAntAnimatableEntity
// ClassId: 6328
// RuntimeId: 52609
// TypeInfo: 0x0000000144E3D8F0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientAntAnimatableEntity : public Entity::Entity {
        char pad_0x20[0x840];
    }; // 0x860
    static_assert(sizeof(ClientAntAnimatableEntity) == 0x860);
}