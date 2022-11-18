// Object: ClientUIDamageTakenIndicatorEntity
// ClassId: 6933
// RuntimeId: 9226
// TypeInfo: 0x0000000144CA1290
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIDamageTakenIndicatorEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientUIDamageTakenIndicatorEntity) == 0x88);
}