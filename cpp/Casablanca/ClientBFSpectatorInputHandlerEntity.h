// Object: ClientBFSpectatorInputHandlerEntity
// ClassId: 6344
// RuntimeId: 23960
// TypeInfo: 0x0000000144CCD3F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorInputHandlerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFSpectatorInputHandlerEntity) == 0x40);
}