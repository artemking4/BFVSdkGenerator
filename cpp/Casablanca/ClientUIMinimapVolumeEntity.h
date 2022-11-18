// Object: ClientUIMinimapVolumeEntity
// ClassId: 6970
// RuntimeId: 17598
// TypeInfo: 0x0000000144CB1EB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIMinimapVolumeEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientUIMinimapVolumeEntity) == 0x50);
}