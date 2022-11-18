// Object: ServerSpotterDurationModifierAffector
// ClassId: 25
// RuntimeId: 41049
// TypeInfo: 0x0000000144CDB610
#include "../DiceShooter/ServerAffector.h"

namespace Casablanca {
    class ServerSpotterDurationModifierAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x10];
    }; // 0xA0
    static_assert(sizeof(ServerSpotterDurationModifierAffector) == 0xA0);
}