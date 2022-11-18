// Object: PointLightEntity
// ClassId: 7221
// RuntimeId: 21996
// TypeInfo: 0x0000000144EB68B0
#include "../WorldRender/OriginalLocalLightEntity.h"

namespace WorldRender {
    class PointLightEntity : public WorldRender::OriginalLocalLightEntity {
        char pad_0x120[0x10];
    }; // 0x130
    static_assert(sizeof(PointLightEntity) == 0x130);
}