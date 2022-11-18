// Object: MaterialPropertyImpulseData
// ClassId: 4273
// RuntimeId: 46468
// TypeInfo: 0x0000000144E9FAC0
#include "../Entity/PhysicsPropertyRelationPropertyData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialPropertyImpulseData : public Entity::PhysicsPropertyRelationPropertyData {
        Float32 ImpulseAbsorptionMultiplier; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(MaterialPropertyImpulseData) == 0x28);
}
#pragma pack(pop)