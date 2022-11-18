// Object: ServerDebrisCluster
// ClassId: 7887
// RuntimeId: 50551
// TypeInfo: 0x0000000144DA4D20
#include "../Debris/DebrisCluster.h"

namespace Debris {
    class ServerDebrisCluster : public Debris::DebrisCluster {
        char pad_0x200[0x100];
    }; // 0x300
    static_assert(sizeof(ServerDebrisCluster) == 0x300);
}