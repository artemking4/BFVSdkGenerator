// Object: ClientDebrisCluster
// ClassId: 7886
// RuntimeId: 16824
// TypeInfo: 0x0000000144DA4F40
#include "../Debris/DebrisCluster.h"

namespace Debris {
    class ClientDebrisCluster : public Debris::DebrisCluster {
        char pad_0x200[0xA0];
    }; // 0x2A0
    static_assert(sizeof(ClientDebrisCluster) == 0x2A0);
}