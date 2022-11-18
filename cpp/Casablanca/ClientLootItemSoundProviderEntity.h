// Object: ClientLootItemSoundProviderEntity
// ClassId: 6745
// RuntimeId: 14307
// TypeInfo: 0x0000000144C47D30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientLootItemSoundProviderEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientLootItemSoundProviderEntity) == 0x68);
}