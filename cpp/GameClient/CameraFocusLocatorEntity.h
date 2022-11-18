// Object: CameraFocusLocatorEntity
// ClassId: 7997
// RuntimeId: 40501
// TypeInfo: 0x0000000144E3F790
#include "../Entity/LocatorEntity.h"

namespace GameClient {
    class CameraFocusLocatorEntity : public Entity::LocatorEntity {
        char pad_0xB0[0x20];
    }; // 0xD0
    static_assert(sizeof(CameraFocusLocatorEntity) == 0xD0);
}