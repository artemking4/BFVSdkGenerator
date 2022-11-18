// Object: SpotLightEntity
// ClassId: 7222
// RuntimeId: 55356
// TypeInfo: 0x0000000144EB67A0
#include "../WorldRender/OriginalLocalLightEntity.h"

namespace WorldRender {
    class SpotLightEntity : public WorldRender::OriginalLocalLightEntity {
        char pad_0x120[0x20];
    }; // 0x140
    static_assert(sizeof(SpotLightEntity) == 0x140);
}