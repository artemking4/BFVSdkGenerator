// Object: BreakableModelPhysicsComponentData
// ClassId: 1948
// RuntimeId: 25511
// TypeInfo: 0x0000000144E66840
#include "../GameplaySim/GamePhysicsComponentData.h"
#include "../Physics/PhysicsBodyData.h"

#pragma pack(push, 16)
namespace GameShared {
    class BreakableModelPhysicsComponentData : public GameplaySim::GamePhysicsComponentData {
        Array<Physics::PhysicsBodyData> BreakableBodies; // 0xB0
        char pad_0xB8[0x8];
    }; // 0xC0
    static_assert(sizeof(BreakableModelPhysicsComponentData) == 0xC0);
}
#pragma pack(pop)