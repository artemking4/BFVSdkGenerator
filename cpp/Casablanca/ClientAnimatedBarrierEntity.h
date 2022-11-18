// Object: ClientAnimatedBarrierEntity
// ClassId: 7848
// RuntimeId: 64041
// TypeInfo: 0x0000000144C90DB0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientAnimatedBarrierEntity : public Entity::SpatialEntity {
        char pad_0x30[0x260];
    }; // 0x290
    static_assert(sizeof(ClientAnimatedBarrierEntity) == 0x290);
}