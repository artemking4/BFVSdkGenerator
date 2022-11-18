// Object: RadiosityMaterialInstanceEntity
// ClassId: 7342
// RuntimeId: 5116
// TypeInfo: 0x0000000144EB6E80
#include "../Entity/Entity.h"

namespace WorldRender {
    class RadiosityMaterialInstanceEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(RadiosityMaterialInstanceEntity) == 0xA0);
}