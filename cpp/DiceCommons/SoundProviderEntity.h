// Object: SoundProviderEntity
// ClassId: 7824
// RuntimeId: 10215
// TypeInfo: 0x0000000144DA8EF0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class SoundProviderEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(SoundProviderEntity) == 0x38);
}