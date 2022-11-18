// Object: EnumHubEntity
// ClassId: 7144
// RuntimeId: 37305
// TypeInfo: 0x0000000144CD9730
#include "../Entity/Entity.h"

namespace Casablanca {
    class EnumHubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(EnumHubEntity) == 0x50);
}