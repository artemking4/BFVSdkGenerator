// Object: PlanarReflectionLocatorEntity
// ClassId: 7307
// RuntimeId: 56987
// TypeInfo: 0x0000000144EC87A0
#include "../Entity/Entity.h"

namespace WorldSim {
    class PlanarReflectionLocatorEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(PlanarReflectionLocatorEntity) == 0xA0);
}