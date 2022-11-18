// Object: ClientProxySupplySphereProjectile
// ClassId: 7920
// RuntimeId: 58806
// TypeInfo: 0x0000000144C5BA90
#include "../Soldier/ClientProxyExplosionPackEntity.h"

namespace Casablanca {
    class ClientProxySupplySphereProjectile : public Soldier::ClientProxyExplosionPackEntity {
        char pad_0x3E0[0x20];
    }; // 0x400
    static_assert(sizeof(ClientProxySupplySphereProjectile) == 0x400);
}