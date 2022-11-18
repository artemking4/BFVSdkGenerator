// Object: WatergateEntity
// ClassId: 8273
// RuntimeId: 13391
// TypeInfo: 0x0000000144CD9950
#include "../Entity/Entity.h"

namespace Casablanca {
    class WatergateEntity : public Entity::Entity {
        char pad_0x20[0x228];
    }; // 0x248
    static_assert(sizeof(WatergateEntity) == 0x248);
}