// Object: SoundDataEntity
// ClassId: 7819
// RuntimeId: 13474
// TypeInfo: 0x0000000144E20840
#include "../Entity/Entity.h"

namespace Audio {
    class SoundDataEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(SoundDataEntity) == 0x78);
}