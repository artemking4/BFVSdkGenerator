// Object: SpartaMessageEntity
// ClassId: 7829
// RuntimeId: 58802
// TypeInfo: 0x0000000144F4B130
#include "../Entity/Entity.h"

namespace SpartaExtensionClient {
    class SpartaMessageEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(SpartaMessageEntity) == 0x68);
}