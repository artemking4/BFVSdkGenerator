// Object: ClientBFUIBestSquadEntity
// ClassId: 6363
// RuntimeId: 48326
// TypeInfo: 0x0000000144C5A790
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIBestSquadEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIBestSquadEntity) == 0x60);
}