// Object: LocalLightEntity
// ClassId: 7219
// RuntimeId: 45007
// TypeInfo: 0x0000000144EC8AD0
#include "../Entity/Entity.h"

namespace WorldSim {
    class LocalLightEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(LocalLightEntity) == 0xC0);
}