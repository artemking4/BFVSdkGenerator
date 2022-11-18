// Object: RadiosityModifierEntity
// ClassId: 7344
// RuntimeId: 48591
// TypeInfo: 0x0000000144EC8690
#include "../Entity/Entity.h"

namespace WorldSim {
    class RadiosityModifierEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(RadiosityModifierEntity) == 0xC0);
}