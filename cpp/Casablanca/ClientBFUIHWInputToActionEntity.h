// Object: ClientBFUIHWInputToActionEntity
// ClassId: 6480
// RuntimeId: 40012
// TypeInfo: 0x0000000144CB8070
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIHWInputToActionEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIHWInputToActionEntity) == 0x58);
}