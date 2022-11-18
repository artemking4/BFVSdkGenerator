// Object: InputReaderActionEntity
// ClassId: 7199
// RuntimeId: 57677
// TypeInfo: 0x0000000144DDF620
#include "../Entity/Entity.h"

namespace DiceShooter {
    class InputReaderActionEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(InputReaderActionEntity) == 0x40);
}