// Object: YawOnlyCameraTransformerEntity
// ClassId: 8284
// RuntimeId: 8385
// TypeInfo: 0x0000000144DD7E60
#include "../Entity/Entity.h"

namespace DiceShooter {
    class YawOnlyCameraTransformerEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(YawOnlyCameraTransformerEntity) == 0x50);
}