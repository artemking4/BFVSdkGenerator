// Object: ClientDakarUIGetFactionsEntity
// ClassId: 6659
// RuntimeId: 17230
// TypeInfo: 0x0000000144C885F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDakarUIGetFactionsEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientDakarUIGetFactionsEntity) == 0x80);
}