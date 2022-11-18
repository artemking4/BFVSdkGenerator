// Object: PBRTubeLightEntity
// ClassId: 7227
// RuntimeId: 13719
// TypeInfo: 0x0000000144EB71B0
#include "../WorldRender/PBRAnalyticLightEntity.h"

namespace WorldRender {
    class PBRTubeLightEntity : public WorldRender::PBRAnalyticLightEntity {
        char pad_0x250[0x20];
    }; // 0x270
    static_assert(sizeof(PBRTubeLightEntity) == 0x270);
}