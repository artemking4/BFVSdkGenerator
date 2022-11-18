// Object: CoastlineQueryEntity
// ClassId: 7067
// RuntimeId: 53907
// TypeInfo: 0x0000000144BDDA60
#include "../Entity/Entity.h"

namespace Ambience {
    class CoastlineQueryEntity : public Entity::Entity {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(CoastlineQueryEntity) == 0x140);
}