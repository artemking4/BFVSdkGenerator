// Object: ClientDoublePlayerEventSplitterEntity
// ClassId: 6679
// RuntimeId: 24556
// TypeInfo: 0x0000000144CD2660
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDoublePlayerEventSplitterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientDoublePlayerEventSplitterEntity) == 0x30);
}