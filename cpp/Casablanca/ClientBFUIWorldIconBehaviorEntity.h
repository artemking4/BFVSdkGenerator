// Object: ClientBFUIWorldIconBehaviorEntity
// ClassId: 6610
// RuntimeId: 12035
// TypeInfo: 0x0000000144C97DF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIWorldIconBehaviorEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientBFUIWorldIconBehaviorEntity) == 0xA0);
}