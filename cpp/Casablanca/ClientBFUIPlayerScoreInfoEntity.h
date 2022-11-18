// Object: ClientBFUIPlayerScoreInfoEntity
// ClassId: 6527
// RuntimeId: 54619
// TypeInfo: 0x0000000144CBF130
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerScoreInfoEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientBFUIPlayerScoreInfoEntity) == 0xA0);
}