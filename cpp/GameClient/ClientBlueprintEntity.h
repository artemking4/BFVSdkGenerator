// Object: ClientBlueprintEntity
// ClassId: 6612
// RuntimeId: 41149
// TypeInfo: 0x0000000144E37E90
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientBlueprintEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBlueprintEntity) == 0x58);
}