// Object: MaterialPropertyPhysicsDestructionData
// ClassId: 4257
// RuntimeId: 33360
// TypeInfo: 0x0000000144F0FB00
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class MaterialPropertyPhysicsDestructionData : public Entity::PhysicsMaterialRelationPropertyData {
        Float32 Density; // 0x20
        Float32 DestructionRadius; // 0x24
        Float32 Elasticity; // 0x28
        Float32 YieldStrength; // 0x2C
        Float32 BreakingStrength; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(MaterialPropertyPhysicsDestructionData) == 0x38);
}
#pragma pack(pop)