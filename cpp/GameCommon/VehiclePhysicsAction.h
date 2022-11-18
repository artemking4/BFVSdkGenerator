// Object: VehiclePhysicsAction
// ClassId: 7295
// RuntimeId: 55030
// TypeInfo: 0x0000000144E4FDD0
#include "../Physics/PhysicsAction.h"

namespace GameCommon {
    class VehiclePhysicsAction : public Physics::PhysicsAction {
        char pad_0x40[0x8];
    }; // 0x48
    static_assert(sizeof(VehiclePhysicsAction) == 0x48);
}