// Object: QuickscopeControlEntity
// ClassId: 7340
// RuntimeId: 8580
// TypeInfo: 0x0000000144F14390
#include "../Entity/Entity.h"

namespace Quickscope {
    class QuickscopeControlEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(QuickscopeControlEntity) == 0x30);
}