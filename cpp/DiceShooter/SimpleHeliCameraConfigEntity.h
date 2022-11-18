// Object: SimpleHeliCameraConfigEntity
// ClassId: 7812
// RuntimeId: 16461
// TypeInfo: 0x0000000144DD76F0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class SimpleHeliCameraConfigEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(SimpleHeliCameraConfigEntity) == 0x30);
}