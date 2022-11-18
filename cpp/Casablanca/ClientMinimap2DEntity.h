// Object: ClientMinimap2DEntity
// ClassId: 6753
// RuntimeId: 44369
// TypeInfo: 0x0000000144C21F90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientMinimap2DEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientMinimap2DEntity) == 0x80);
}