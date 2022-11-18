// Object: RagdollPhysicsComponentData
// ClassId: 1972
// RuntimeId: 39423
// TypeInfo: 0x0000000144F0F900
#include "../Physics/PhysicsComponentData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Physics {
    class RagdollPhysicsComponentData : public Physics::PhysicsComponentData {
        Array<Uint32> BodiesNamesHashes; // 0xA0
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(RagdollPhysicsComponentData) == 0xB0);
}
#pragma pack(pop)