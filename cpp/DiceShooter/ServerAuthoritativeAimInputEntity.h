// Object: ServerAuthoritativeAimInputEntity
// ClassId: 7434
// RuntimeId: 28238
// TypeInfo: 0x0000000144DD5630
#include "../DiceShooter/ServerAimInputEntity.h"

namespace DiceShooter {
    class ServerAuthoritativeAimInputEntity : public DiceShooter::ServerAimInputEntity {
        char pad_0x50[0x78];
    }; // 0xC8
    static_assert(sizeof(ServerAuthoritativeAimInputEntity) == 0xC8);
}