// Object: ClientProxyBankEntity
// ClassId: 6827
// RuntimeId: 21104
// TypeInfo: 0x0000000144E3F8A0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientProxyBankEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientProxyBankEntity) == 0x30);
}