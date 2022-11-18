// Object: ClientBFUIPlayerChooserEntity
// ClassId: 6520
// RuntimeId: 57690
// TypeInfo: 0x0000000144CBC210
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerChooserEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIPlayerChooserEntity) == 0x50);
}