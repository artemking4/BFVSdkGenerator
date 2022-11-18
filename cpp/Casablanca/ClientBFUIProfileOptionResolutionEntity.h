// Object: ClientBFUIProfileOptionResolutionEntity
// ClassId: 6548
// RuntimeId: 64755
// TypeInfo: 0x0000000144CBC980
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIProfileOptionResolutionEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUIProfileOptionResolutionEntity) == 0x68);
}