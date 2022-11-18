// Object: EmitterExclusionVolumeEntity
// ClassId: 7136
// RuntimeId: 32670
// TypeInfo: 0x0000000144E23D10
#include "../Entity/Entity.h"

namespace Emitter {
    class EmitterExclusionVolumeEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(EmitterExclusionVolumeEntity) == 0x58);
}