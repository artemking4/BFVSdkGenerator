// Object: ClientMovieEntity
// ClassId: 6755
// RuntimeId: 27187
// TypeInfo: 0x0000000144E356D0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientMovieEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientMovieEntity) == 0x58);
}