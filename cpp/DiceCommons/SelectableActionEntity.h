// Object: SelectableActionEntity
// ClassId: 7376
// RuntimeId: 43141
// TypeInfo: 0x0000000144DAA280
#include "../Entity/Entity.h"

namespace DiceCommons {
    class SelectableActionEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(SelectableActionEntity) == 0x40);
}