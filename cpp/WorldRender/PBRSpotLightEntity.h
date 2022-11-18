// Object: PBRSpotLightEntity
// ClassId: 7226
// RuntimeId: 15980
// TypeInfo: 0x0000000144EB72C0
#include "../WorldRender/PBRAnalyticLightEntity.h"

namespace WorldRender {
    class PBRSpotLightEntity : public WorldRender::PBRAnalyticLightEntity {
        char pad_0x250[0x50];
    }; // 0x2A0
    static_assert(sizeof(PBRSpotLightEntity) == 0x2A0);
}