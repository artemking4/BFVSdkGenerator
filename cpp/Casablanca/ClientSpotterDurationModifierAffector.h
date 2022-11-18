// Object: ClientSpotterDurationModifierAffector
// ClassId: 13
// RuntimeId: 50810
// TypeInfo: 0x0000000144C44E20
#include "../DiceShooter/ClientAffector.h"

namespace Casablanca {
    class ClientSpotterDurationModifierAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x8];
    }; // 0x30
    static_assert(sizeof(ClientSpotterDurationModifierAffector) == 0x30);
}