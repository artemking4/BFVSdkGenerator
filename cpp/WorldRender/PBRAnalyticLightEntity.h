// Object: PBRAnalyticLightEntity
// ClassId: 7223
// RuntimeId: 7624
// TypeInfo: 0x0000000144EB69C0
#include "../WorldSim/LocalLightEntity.h"

namespace WorldRender {
    class PBRAnalyticLightEntity : public WorldSim::LocalLightEntity {
        char pad_0xC0[0x190];
    }; // 0x250
    static_assert(sizeof(PBRAnalyticLightEntity) == 0x250);
}