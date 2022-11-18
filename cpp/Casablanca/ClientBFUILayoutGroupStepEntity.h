// Object: ClientBFUILayoutGroupStepEntity
// ClassId: 6487
// RuntimeId: 52803
// TypeInfo: 0x0000000144C98CA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUILayoutGroupStepEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientBFUILayoutGroupStepEntity) == 0x30);
}