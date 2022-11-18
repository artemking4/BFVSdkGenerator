// Object: ClientTrackPlayerQueryEntity
// ClassId: 6905
// RuntimeId: 1955
// TypeInfo: 0x0000000144C4C380
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientTrackPlayerQueryEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientTrackPlayerQueryEntity) == 0x30);
}