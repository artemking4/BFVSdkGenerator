// Object: ClientSupplySphereProjectile
// ClassId: 7912
// RuntimeId: 41050
// TypeInfo: 0x0000000144C5B980
#include "../Soldier/ClientExplosionPackEntity.h"

namespace Casablanca {
    class ClientSupplySphereProjectile : public Soldier::ClientExplosionPackEntity {
        char pad_0x570[0xA0];
    }; // 0x610
    static_assert(sizeof(ClientSupplySphereProjectile) == 0x610);
}