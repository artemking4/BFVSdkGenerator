// Object: DebrisCluster
// ClassId: 7885
// RuntimeId: 52024
// TypeInfo: 0x0000000144DA4E30
#include "../Entity/ComponentEntity.h"

namespace Debris {
    class DebrisCluster : public Entity::ComponentEntity {
        char pad_0xE8[0x118];
    }; // 0x200
    static_assert(sizeof(DebrisCluster) == 0x200);
}