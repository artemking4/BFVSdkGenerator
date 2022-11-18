// Object: TimelineEDLControlEntity
// ClassId: 8094
// RuntimeId: 40494
// TypeInfo: 0x0000000144DAD910
#include "../Entity/Entity.h"

namespace DiceCommons {
    class TimelineEDLControlEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(TimelineEDLControlEntity) == 0xB0);
}