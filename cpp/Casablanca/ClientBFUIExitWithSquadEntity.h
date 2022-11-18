// Object: ClientBFUIExitWithSquadEntity
// ClassId: 6392
// RuntimeId: 50577
// TypeInfo: 0x0000000144C5A680
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIExitWithSquadEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIExitWithSquadEntity) == 0x50);
}