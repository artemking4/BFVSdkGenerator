// Object: ClientBFUIBoostInfoEntity
// ClassId: 6365
// RuntimeId: 51288
// TypeInfo: 0x0000000144C86640
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIBoostInfoEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientBFUIBoostInfoEntity) == 0x80);
}