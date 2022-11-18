// Object: FloatPhysicsAction
// ClassId: 7294
// RuntimeId: 7769
// TypeInfo: 0x0000000144F10B50
#include "../Physics/PhysicsAction.h"

namespace Physics {
    class FloatPhysicsAction : public Physics::PhysicsAction {
        char pad_0x40[0x8];
    }; // 0x48
    static_assert(sizeof(FloatPhysicsAction) == 0x48);
}