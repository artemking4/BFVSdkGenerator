// Object: LoadingMusicEntity
// ClassId: 7214
// RuntimeId: 27806
// TypeInfo: 0x0000000144E20B70
#include "../Entity/Entity.h"

namespace Audio {
    class LoadingMusicEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(LoadingMusicEntity) == 0xC8);
}