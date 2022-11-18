// Object: RenderVolumeEntity
// ClassId: 7351
// RuntimeId: 53332
// TypeInfo: 0x0000000144EC89C0
#include "../Entity/Entity.h"

namespace WorldSim {
    class RenderVolumeEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(RenderVolumeEntity) == 0xB0);
}