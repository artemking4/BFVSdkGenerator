// Object: ClientEnteredIngameEntity
// ClassId: 6688
// RuntimeId: 57319
// TypeInfo: 0x0000000144CD2220
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientEnteredIngameEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientEnteredIngameEntity) == 0x40);
}