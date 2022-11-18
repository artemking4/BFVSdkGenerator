// Object: ServerMultiplayerSaveEntity
// ClassId: 7603
// RuntimeId: 43446
// TypeInfo: 0x0000000144CE6860
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerMultiplayerSaveEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerMultiplayerSaveEntity) == 0x30);
}