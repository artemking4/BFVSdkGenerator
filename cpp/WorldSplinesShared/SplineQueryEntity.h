// Object: SplineQueryEntity
// ClassId: 8060
// RuntimeId: 54225
// TypeInfo: 0x0000000144F7C280
#include "../Entity/Entity.h"

namespace WorldSplinesShared {
    class SplineQueryEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(SplineQueryEntity) == 0x40);
}