// Object: ClientBFSpectatorSelectedPlayerNotifierEntity
// ClassId: 6356
// RuntimeId: 46512
// TypeInfo: 0x0000000144CCC950
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorSelectedPlayerNotifierEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFSpectatorSelectedPlayerNotifierEntity) == 0x48);
}