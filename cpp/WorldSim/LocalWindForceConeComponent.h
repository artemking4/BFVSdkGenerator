// Object: LocalWindForceConeComponent
// ClassId: 6167
// RuntimeId: 39944
// TypeInfo: 0x0000000144EC6AB0
#include "../WorldSim/WindForceComponent.h"

namespace WorldSim {
    class LocalWindForceConeComponent : public WorldSim::WindForceComponent {
        char pad_0xB0[0xC0];
    }; // 0x170
    static_assert(sizeof(LocalWindForceConeComponent) == 0x170);
}