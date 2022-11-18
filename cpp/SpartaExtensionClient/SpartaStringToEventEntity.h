// Object: SpartaStringToEventEntity
// ClassId: 7832
// RuntimeId: 15958
// TypeInfo: 0x0000000144F4AE00
#include "../Entity/Entity.h"

namespace SpartaExtensionClient {
    class SpartaStringToEventEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(SpartaStringToEventEntity) == 0x70);
}