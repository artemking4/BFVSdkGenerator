// Object: ClientUIOperationInfoEntity
// ClassId: 6980
// RuntimeId: 8418
// TypeInfo: 0x0000000144CB5130
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIOperationInfoEntity : public Entity::Entity {
        char pad_0x20[0x160];
    }; // 0x180
    static_assert(sizeof(ClientUIOperationInfoEntity) == 0x180);
}