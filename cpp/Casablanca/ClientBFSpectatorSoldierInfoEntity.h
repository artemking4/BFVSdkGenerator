// Object: ClientBFSpectatorSoldierInfoEntity
// ClassId: 6357
// RuntimeId: 50458
// TypeInfo: 0x0000000144CCC840
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorSoldierInfoEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientBFSpectatorSoldierInfoEntity) == 0x70);
}