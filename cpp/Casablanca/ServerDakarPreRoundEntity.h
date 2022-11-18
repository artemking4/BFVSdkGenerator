// Object: ServerDakarPreRoundEntity
// ClassId: 7486
// RuntimeId: 1035
// TypeInfo: 0x0000000144C3A170
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarPreRoundEntity : public Entity::Entity {
        char pad_0x20[0x108];
    }; // 0x128
    static_assert(sizeof(ServerDakarPreRoundEntity) == 0x128);
}