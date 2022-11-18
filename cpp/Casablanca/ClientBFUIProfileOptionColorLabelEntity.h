// Object: ClientBFUIProfileOptionColorLabelEntity
// ClassId: 6536
// RuntimeId: 52940
// TypeInfo: 0x0000000144CBD530
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIProfileOptionColorLabelEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIProfileOptionColorLabelEntity) == 0x60);
}