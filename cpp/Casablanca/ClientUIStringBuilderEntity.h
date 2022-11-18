// Object: ClientUIStringBuilderEntity
// ClassId: 7011
// RuntimeId: 25346
// TypeInfo: 0x0000000144CB4250
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIStringBuilderEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ClientUIStringBuilderEntity) == 0x120);
}