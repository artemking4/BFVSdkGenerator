// Object: BFClientLocalPlayerEventGate
// ClassId: 6197
// RuntimeId: 41228
// TypeInfo: 0x0000000144C8AE80
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientLocalPlayerEventGate : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(BFClientLocalPlayerEventGate) == 0x48);
}