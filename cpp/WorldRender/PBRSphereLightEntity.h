// Object: PBRSphereLightEntity
// ClassId: 7225
// RuntimeId: 31860
// TypeInfo: 0x0000000144EB73D0
#include "../WorldRender/PBRAnalyticLightEntity.h"

namespace WorldRender {
    class PBRSphereLightEntity : public WorldRender::PBRAnalyticLightEntity {
        char pad_0x250[0x30];
    }; // 0x280
    static_assert(sizeof(PBRSphereLightEntity) == 0x280);
}