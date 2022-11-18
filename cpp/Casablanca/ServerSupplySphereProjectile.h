// Object: ServerSupplySphereProjectile
// ClassId: 7963
// RuntimeId: 21722
// TypeInfo: 0x0000000144C64750
#include "../Soldier/ServerExplosionPackEntity.h"

namespace Casablanca {
    class ServerSupplySphereProjectile : public Soldier::ServerExplosionPackEntity {
        char pad_0x6B0[0x370];
    }; // 0xA20
    static_assert(sizeof(ServerSupplySphereProjectile) == 0xA20);
}