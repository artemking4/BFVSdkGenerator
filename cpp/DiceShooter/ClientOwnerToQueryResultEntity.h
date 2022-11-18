// Object: ClientOwnerToQueryResultEntity
// ClassId: 6770
// RuntimeId: 54572
// TypeInfo: 0x0000000144DDAFF0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientOwnerToQueryResultEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientOwnerToQueryResultEntity) == 0x90);
}