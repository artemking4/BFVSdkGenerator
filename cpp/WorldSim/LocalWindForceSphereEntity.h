// Object: LocalWindForceSphereEntity
// ClassId: 7994
// RuntimeId: 61524
// TypeInfo: 0x0000000144EC3F90
#include "../WorldSim/LocalWindForceEntity.h"

namespace WorldSim {
    class LocalWindForceSphereEntity : public WorldSim::LocalWindForceEntity {
        char pad_0xF0[0x10];
    }; // 0x100
    static_assert(sizeof(LocalWindForceSphereEntity) == 0x100);
}