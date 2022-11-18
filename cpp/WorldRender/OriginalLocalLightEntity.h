// Object: OriginalLocalLightEntity
// ClassId: 7220
// RuntimeId: 41350
// TypeInfo: 0x0000000144EB7F80
#include "../WorldSim/LocalLightEntity.h"

namespace WorldRender {
    class OriginalLocalLightEntity : public WorldSim::LocalLightEntity {
        char pad_0xC0[0x60];
    }; // 0x120
    static_assert(sizeof(OriginalLocalLightEntity) == 0x120);
}