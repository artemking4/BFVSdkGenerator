// Object: ClientBFUIGetParentAppearanceEntity
// ClassId: 6433
// RuntimeId: 34691
// TypeInfo: 0x0000000144CC56F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetParentAppearanceEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIGetParentAppearanceEntity) == 0x50);
}