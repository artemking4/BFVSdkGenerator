// Object: ClientBFUIKeybindingsDataProviderEntity
// ClassId: 6485
// RuntimeId: 13108
// TypeInfo: 0x0000000144CB7F60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIKeybindingsDataProviderEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIKeybindingsDataProviderEntity) == 0x48);
}