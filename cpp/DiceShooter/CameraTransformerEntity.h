// Object: CameraTransformerEntity
// ClassId: 6287
// RuntimeId: 59096
// TypeInfo: 0x0000000144DD84C0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class CameraTransformerEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(CameraTransformerEntity) == 0x58);
}