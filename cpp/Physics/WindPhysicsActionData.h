// Object: WindPhysicsActionData
// ClassId: 2974
// RuntimeId: 44126
// TypeInfo: 0x0000000144F0F600
#include "../Physics/PhysicsActionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class WindPhysicsActionData : public Physics::PhysicsActionData {
        Float32 ResistanceFactor; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WindPhysicsActionData) == 0x28);
}
#pragma pack(pop)