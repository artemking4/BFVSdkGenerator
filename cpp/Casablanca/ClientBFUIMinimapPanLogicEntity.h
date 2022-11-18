// Object: ClientBFUIMinimapPanLogicEntity
// ClassId: 6490
// RuntimeId: 53498
// TypeInfo: 0x0000000144CA26A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIMinimapPanLogicEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientBFUIMinimapPanLogicEntity) == 0xD0);
}