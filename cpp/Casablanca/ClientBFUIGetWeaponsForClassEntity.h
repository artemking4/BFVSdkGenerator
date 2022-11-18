// Object: ClientBFUIGetWeaponsForClassEntity
// ClassId: 6478
// RuntimeId: 54921
// TypeInfo: 0x0000000144CA8DE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetWeaponsForClassEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIGetWeaponsForClassEntity) == 0x58);
}