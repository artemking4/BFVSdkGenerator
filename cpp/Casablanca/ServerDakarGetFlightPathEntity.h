// Object: ServerDakarGetFlightPathEntity
// ClassId: 7483
// RuntimeId: 12727
// TypeInfo: 0x0000000144C3A8E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarGetFlightPathEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerDakarGetFlightPathEntity) == 0x60);
}