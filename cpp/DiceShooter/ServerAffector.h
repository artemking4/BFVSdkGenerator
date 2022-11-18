// Object: ServerAffector
// ClassId: 14
// RuntimeId: 4285
// TypeInfo: 0x0000000144DD6630
#include "../DiceShooter/Affector.h"

namespace DiceShooter {
    class ServerAffector : public DiceShooter::Affector {
        char pad_0x18[0x78];
    }; // 0x90
    static_assert(sizeof(ServerAffector) == 0x90);
}