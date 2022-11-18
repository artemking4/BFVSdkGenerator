// Object: ServerWaterSurfacePhysicsComponent
// ClassId: 6147
// RuntimeId: 45139
// TypeInfo: 0x0000000144F71D20
#include "../Physics/PhysicsComponent.h"

namespace WaterInteractSim {
    class ServerWaterSurfacePhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(ServerWaterSurfacePhysicsComponent) == 0x70);
}