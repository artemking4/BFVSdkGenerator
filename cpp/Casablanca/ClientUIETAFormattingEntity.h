// Object: ClientUIETAFormattingEntity
// ClassId: 6940
// RuntimeId: 64753
// TypeInfo: 0x0000000144CB31D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIETAFormattingEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUIETAFormattingEntity) == 0x38);
}