// Object: ClientUILinePathBuilderEntity
// ClassId: 6964
// RuntimeId: 4065
// TypeInfo: 0x0000000144CB2400
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUILinePathBuilderEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ClientUILinePathBuilderEntity) == 0xE0);
}