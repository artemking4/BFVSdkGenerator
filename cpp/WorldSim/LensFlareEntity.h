// Object: LensFlareEntity
// ClassId: 7209
// RuntimeId: 7007
// TypeInfo: 0x0000000144EC8BE0
#include "../Entity/Entity.h"

namespace WorldSim {
    class LensFlareEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(LensFlareEntity) == 0x100);
}