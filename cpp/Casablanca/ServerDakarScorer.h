// Object: ServerDakarScorer
// ClassId: 7491
// RuntimeId: 17401
// TypeInfo: 0x0000000144C394B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarScorer : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerDakarScorer) == 0x30);
}