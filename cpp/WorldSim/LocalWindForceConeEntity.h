// Object: LocalWindForceConeEntity
// ClassId: 7993
// RuntimeId: 59016
// TypeInfo: 0x0000000144EC8250
#include "../WorldSim/LocalWindForceEntity.h"

namespace WorldSim {
    class LocalWindForceConeEntity : public WorldSim::LocalWindForceEntity {
        char pad_0xF0[0x30];
    }; // 0x120
    static_assert(sizeof(LocalWindForceConeEntity) == 0x120);
}