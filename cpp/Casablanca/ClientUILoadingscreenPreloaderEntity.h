// Object: ClientUILoadingscreenPreloaderEntity
// ClassId: 6966
// RuntimeId: 53120
// TypeInfo: 0x0000000144CB22F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUILoadingscreenPreloaderEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientUILoadingscreenPreloaderEntity) == 0x60);
}