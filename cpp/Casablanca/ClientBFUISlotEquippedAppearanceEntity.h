// Object: ClientBFUISlotEquippedAppearanceEntity
// ClassId: 6569
// RuntimeId: 12512
// TypeInfo: 0x0000000144CC8B90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISlotEquippedAppearanceEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientBFUISlotEquippedAppearanceEntity) == 0x78);
}