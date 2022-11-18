// Object: StatEventTriggerEntity
// ClassId: 8065
// RuntimeId: 40778
// TypeInfo: 0x0000000144DC5030
#include "../Entity/Entity.h"

namespace DicePersistence {
    class StatEventTriggerEntity : public Entity::Entity {
        char pad_0x20[0x150];
    }; // 0x170
    static_assert(sizeof(StatEventTriggerEntity) == 0x170);
}