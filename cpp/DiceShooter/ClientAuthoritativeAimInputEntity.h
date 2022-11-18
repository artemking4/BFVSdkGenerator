// Object: ClientAuthoritativeAimInputEntity
// ClassId: 6311
// RuntimeId: 61033
// TypeInfo: 0x0000000144DDD720
#include "../DiceShooter/ClientAimInputEntity.h"

namespace DiceShooter {
    class ClientAuthoritativeAimInputEntity : public DiceShooter::ClientAimInputEntity {
        char pad_0x50[0x108];
    }; // 0x158
    static_assert(sizeof(ClientAuthoritativeAimInputEntity) == 0x158);
}