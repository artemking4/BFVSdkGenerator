// Object: ClientBFUIGetFactionInfoEntity
// ClassId: 6423
// RuntimeId: 28420
// TypeInfo: 0x0000000144CC5F70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetFactionInfoEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ClientBFUIGetFactionInfoEntity) == 0xC8);
}