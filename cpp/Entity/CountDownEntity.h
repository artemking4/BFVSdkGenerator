// Object: CountDownEntity
// ClassId: 7096
// RuntimeId: 39333
// TypeInfo: 0x0000000144ED0BA0
#include "../Entity/Entity.h"

namespace Entity {
    class CountDownEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(CountDownEntity) == 0x48);
}