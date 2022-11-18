// Object: ClientBulletTrailVisualizerEntity
// ClassId: 6614
// RuntimeId: 35504
// TypeInfo: 0x0000000144C90640
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBulletTrailVisualizerEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientBulletTrailVisualizerEntity) == 0x78);
}