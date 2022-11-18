// Object: SoundMasterEntity
// ClassId: 7822
// RuntimeId: 31846
// TypeInfo: 0x0000000144E20510
#include "../Entity/Entity.h"

namespace Audio {
    class SoundMasterEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(SoundMasterEntity) == 0xB8);
}