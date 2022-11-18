// Object: ClientBFUIQuitWithSquadEntity
// ClassId: 6553
// RuntimeId: 6334
// TypeInfo: 0x0000000144C9CF90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIQuitWithSquadEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIQuitWithSquadEntity) == 0x60);
}