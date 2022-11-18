// Object: ClientUILevelInfoEntity
// ClassId: 6961
// RuntimeId: 44897
// TypeInfo: 0x0000000144CB2730
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUILevelInfoEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientUILevelInfoEntity) == 0x80);
}