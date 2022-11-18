// Object: ClientBFUIMapAreaInfoEntity
// ClassId: 6489
// RuntimeId: 5570
// TypeInfo: 0x0000000144C9B1F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIMapAreaInfoEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientBFUIMapAreaInfoEntity) == 0x78);
}