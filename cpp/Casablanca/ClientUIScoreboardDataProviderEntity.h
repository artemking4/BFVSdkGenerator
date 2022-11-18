// Object: ClientUIScoreboardDataProviderEntity
// ClassId: 6988
// RuntimeId: 51722
// TypeInfo: 0x0000000144CBA960
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIScoreboardDataProviderEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientUIScoreboardDataProviderEntity) == 0xB0);
}