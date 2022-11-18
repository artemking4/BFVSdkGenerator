// Object: ClientAnimationEnumerationEntity
// ClassId: 6325
// RuntimeId: 47171
// TypeInfo: 0x0000000144E3DA00
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientAnimationEnumerationEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientAnimationEnumerationEntity) == 0x88);
}