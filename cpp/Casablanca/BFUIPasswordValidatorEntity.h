// Object: BFUIPasswordValidatorEntity
// ClassId: 6249
// RuntimeId: 62986
// TypeInfo: 0x0000000144CBC650
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFUIPasswordValidatorEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(BFUIPasswordValidatorEntity) == 0x68);
}