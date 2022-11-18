// Object: ClientPlayVFXEntity
// ClassId: 6791
// RuntimeId: 38745
// TypeInfo: 0x0000000144E3BCB0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientPlayVFXEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientPlayVFXEntity) == 0x78);
}