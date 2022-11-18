// Object: ClientDFSimSpawnSettingsEntity
// ClassId: 6649
// RuntimeId: 32749
// TypeInfo: 0x0000000144C8DC20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDFSimSpawnSettingsEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientDFSimSpawnSettingsEntity) == 0x30);
}