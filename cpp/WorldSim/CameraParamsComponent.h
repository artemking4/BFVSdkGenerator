// Object: CameraParamsComponent
// ClassId: 5748
// RuntimeId: 56472
// TypeInfo: 0x0000000144EC75B0
#include "../Entity/Component.h"

namespace WorldSim {
    class CameraParamsComponent : public Entity::Component {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(CameraParamsComponent) == 0x30);
}