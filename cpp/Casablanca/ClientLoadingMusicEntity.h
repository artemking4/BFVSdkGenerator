// Object: ClientLoadingMusicEntity
// ClassId: 6740
// RuntimeId: 24877
// TypeInfo: 0x0000000144C9CA40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientLoadingMusicEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientLoadingMusicEntity) == 0x30);
}