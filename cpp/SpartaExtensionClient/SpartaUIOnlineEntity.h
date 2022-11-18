// Object: SpartaUIOnlineEntity
// ClassId: 7833
// RuntimeId: 26239
// TypeInfo: 0x0000000144F4B460
#include "../Entity/Entity.h"

namespace SpartaExtensionClient {
    class SpartaUIOnlineEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(SpartaUIOnlineEntity) == 0x88);
}