// Object: WindPhysicsAction
// ClassId: 7296
// RuntimeId: 7591
// TypeInfo: 0x0000000144F140C0
#include "../Physics/PhysicsAction.h"

namespace Physics {
    class WindPhysicsAction : public Physics::PhysicsAction {
        char pad_0x40[0x8];
    }; // 0x48
    static_assert(sizeof(WindPhysicsAction) == 0x48);
}