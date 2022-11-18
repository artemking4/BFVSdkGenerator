// Object: RadiosityMaterialEntity
// ClassId: 7341
// RuntimeId: 24358
// TypeInfo: 0x0000000144EB6F90
#include "../Entity/Entity.h"

namespace WorldRender {
    class RadiosityMaterialEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(RadiosityMaterialEntity) == 0xA0);
}