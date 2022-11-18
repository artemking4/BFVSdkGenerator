// Object: ClientUICampaignInfoEntity
// ClassId: 6918
// RuntimeId: 37252
// TypeInfo: 0x0000000144C9C4F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUICampaignInfoEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientUICampaignInfoEntity) == 0x98);
}