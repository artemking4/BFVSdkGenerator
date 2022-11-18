// Object: SpartaSendMessageEntity
// ClassId: 7831
// RuntimeId: 45307
// TypeInfo: 0x0000000144F4AF10
#include "../Entity/Entity.h"

namespace SpartaExtensionClient {
    class SpartaSendMessageEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(SpartaSendMessageEntity) == 0x30);
}