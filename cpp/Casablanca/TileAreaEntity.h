// Object: TileAreaEntity
// ClassId: 8093
// RuntimeId: 57722
// TypeInfo: 0x0000000144CD91E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class TileAreaEntity : public Entity::Entity {
        char pad_0x20[0x168];
    }; // 0x188
    static_assert(sizeof(TileAreaEntity) == 0x188);
}