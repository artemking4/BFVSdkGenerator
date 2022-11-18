// Object: PropertyChangeListenerEntity
// ClassId: 7328
// RuntimeId: 27261
// TypeInfo: 0x0000000144CD9B70
#include "../Entity/Entity.h"

namespace Casablanca {
    class PropertyChangeListenerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(PropertyChangeListenerEntity) == 0x40);
}