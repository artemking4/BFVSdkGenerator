// Object: ClientBFUIObjectCompareEntity
// ClassId: 6493
// RuntimeId: 7463
// TypeInfo: 0x0000000144CA8AB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIObjectCompareEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIObjectCompareEntity) == 0x48);
}