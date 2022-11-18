// Object: ClientDeathExperienceEntity
// ClassId: 6668
// RuntimeId: 22941
// TypeInfo: 0x0000000144C9E780
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDeathExperienceEntity : public Entity::Entity {
        char pad_0x20[0x2B0];
    }; // 0x2D0
    static_assert(sizeof(ClientDeathExperienceEntity) == 0x2D0);
}