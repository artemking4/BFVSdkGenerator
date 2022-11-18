// Object: ClientDFSimVolumeEntity
// ClassId: 6652
// RuntimeId: 39391
// TypeInfo: 0x0000000144C8DA00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDFSimVolumeEntity : public Entity::Entity {
        char pad_0x20[0x180];
    }; // 0x1A0
    static_assert(sizeof(ClientDFSimVolumeEntity) == 0x1A0);
}