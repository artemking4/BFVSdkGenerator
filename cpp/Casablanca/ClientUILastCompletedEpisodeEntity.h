// Object: ClientUILastCompletedEpisodeEntity
// ClassId: 6960
// RuntimeId: 22042
// TypeInfo: 0x0000000144CC1FA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUILastCompletedEpisodeEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientUILastCompletedEpisodeEntity) == 0x70);
}