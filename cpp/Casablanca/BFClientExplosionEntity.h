// Object: BFClientExplosionEntity
// ClassId: 6694
// RuntimeId: 33837
// TypeInfo: 0x0000000144C940C0
#include "../GameClient/ClientExplosionEntity.h"

namespace Casablanca {
    class BFClientExplosionEntity : public GameClient::ClientExplosionEntity {
        char pad_0x310[0x30];
    }; // 0x340
    static_assert(sizeof(BFClientExplosionEntity) == 0x340);
}