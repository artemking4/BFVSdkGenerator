// Object: ServerDoublePlayerEventSplitterEntity
// ClassId: 7529
// RuntimeId: 55563
// TypeInfo: 0x0000000144C3BB80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDoublePlayerEventSplitterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerDoublePlayerEventSplitterEntity) == 0x30);
}