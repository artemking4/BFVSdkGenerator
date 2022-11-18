// Object: ClientUINearbyMedicsDataProviderEntity
// ClassId: 6973
// RuntimeId: 33712
// TypeInfo: 0x0000000144CAE700
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUINearbyMedicsDataProviderEntity : public Entity::Entity {
        char pad_0x20[0xD8];
    }; // 0xF8
    static_assert(sizeof(ClientUINearbyMedicsDataProviderEntity) == 0xF8);
}