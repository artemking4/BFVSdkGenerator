// Object: LightProbeVolumeEntity
// ClassId: 7212
// RuntimeId: 30190
// TypeInfo: 0x0000000144EB7E70
#include "../Entity/Entity.h"

namespace WorldRender {
    class LightProbeVolumeEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(LightProbeVolumeEntity) == 0x68);
}