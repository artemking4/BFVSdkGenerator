// Object: PBRRectangularLightEntity
// ClassId: 7224
// RuntimeId: 39162
// TypeInfo: 0x0000000144EB70A0
#include "../WorldRender/PBRAnalyticLightEntity.h"

namespace WorldRender {
    class PBRRectangularLightEntity : public WorldRender::PBRAnalyticLightEntity {
        char pad_0x250[0x30];
    }; // 0x280
    static_assert(sizeof(PBRRectangularLightEntity) == 0x280);
}