// Object: ClientWaterSurfacePhysicsComponent
// ClassId: 6114
// RuntimeId: 64301
// TypeInfo: 0x0000000144F71DA0
#include "../Physics/PhysicsComponent.h"

namespace WaterInteractSim {
    class ClientWaterSurfacePhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x68];
    }; // 0xD0
    static_assert(sizeof(ClientWaterSurfacePhysicsComponent) == 0xD0);
}