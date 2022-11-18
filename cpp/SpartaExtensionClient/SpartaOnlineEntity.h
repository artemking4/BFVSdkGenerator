// Object: SpartaOnlineEntity
// ClassId: 7830
// RuntimeId: 27890
// TypeInfo: 0x0000000144F4B020
#include "../Entity/Entity.h"

namespace SpartaExtensionClient {
    class SpartaOnlineEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(SpartaOnlineEntity) == 0x38);
}