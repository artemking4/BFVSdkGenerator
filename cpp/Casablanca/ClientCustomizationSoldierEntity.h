// Object: ClientCustomizationSoldierEntity
// ClassId: 7854
// RuntimeId: 18134
// TypeInfo: 0x0000000144C90200
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientCustomizationSoldierEntity : public Entity::SpatialEntity {
        char pad_0x30[0xCD0];
    }; // 0xD00
    static_assert(sizeof(ClientCustomizationSoldierEntity) == 0xD00);
}