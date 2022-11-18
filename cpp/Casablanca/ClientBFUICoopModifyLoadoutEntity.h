// Object: ClientBFUICoopModifyLoadoutEntity
// ClassId: 6377
// RuntimeId: 8252
// TypeInfo: 0x0000000144CAB1E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICoopModifyLoadoutEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUICoopModifyLoadoutEntity) == 0x40);
}