// Object: ProceduralDestructionForceData
// ClassId: 4277
// RuntimeId: 13688
// TypeInfo: 0x0000000144DA4B20
#include "../Entity/PhysicsPropertyRelationPropertyData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Debris {
    class ProceduralDestructionForceData : public Entity::PhysicsPropertyRelationPropertyData {
        Float32 Force; // 0x20
        Float32 MinForce; // 0x24
        Float32 MaxForce; // 0x28
        Float32 LayeredImpactDelay; // 0x2C
        Float32 LayeredCollisionDelay; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ProceduralDestructionForceData) == 0x38);
}
#pragma pack(pop)