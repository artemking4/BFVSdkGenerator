// Object: CameraEnterAreaTriggerEntity
// ClassId: 6285
// RuntimeId: 28268
// TypeInfo: 0x0000000144E3BA90
#include "../Entity/Entity.h"

namespace GameClient {
    class CameraEnterAreaTriggerEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(CameraEnterAreaTriggerEntity) == 0xA8);
}