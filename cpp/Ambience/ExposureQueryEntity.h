// Object: ExposureQueryEntity
// ClassId: 7165
// RuntimeId: 20322
// TypeInfo: 0x0000000144BDD950
#include "../Entity/Entity.h"

namespace Ambience {
    class ExposureQueryEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ExposureQueryEntity) == 0x70);
}