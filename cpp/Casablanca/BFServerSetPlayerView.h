// Object: BFServerSetPlayerView
// ClassId: 6239
// RuntimeId: 49687
// TypeInfo: 0x0000000144C38210
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerSetPlayerView : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(BFServerSetPlayerView) == 0x30);
}