// Object: ClientAnimationEnumerationChoiceEntity
// ClassId: 6324
// RuntimeId: 37601
// TypeInfo: 0x0000000144E3E400
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientAnimationEnumerationChoiceEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientAnimationEnumerationChoiceEntity) == 0x38);
}