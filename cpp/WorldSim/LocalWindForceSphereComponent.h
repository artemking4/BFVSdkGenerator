// Object: LocalWindForceSphereComponent
// ClassId: 6168
// RuntimeId: 64566
// TypeInfo: 0x0000000144EC33C0
#include "../WorldSim/WindForceComponent.h"

namespace WorldSim {
    class LocalWindForceSphereComponent : public WorldSim::WindForceComponent {
        char pad_0xB0[0x10];
    }; // 0xC0
    static_assert(sizeof(LocalWindForceSphereComponent) == 0xC0);
}