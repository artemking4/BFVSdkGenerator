// Object: ClientUIGlobalScoreboardDataProviderEntity
// ClassId: 6951
// RuntimeId: 4142
// TypeInfo: 0x0000000144C477E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIGlobalScoreboardDataProviderEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientUIGlobalScoreboardDataProviderEntity) == 0x80);
}