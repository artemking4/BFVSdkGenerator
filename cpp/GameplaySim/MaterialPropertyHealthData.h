// Object: MaterialPropertyHealthData
// ClassId: 4272
// RuntimeId: 32024
// TypeInfo: 0x0000000144E9FB40
#include "../Entity/PhysicsPropertyRelationPropertyData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialPropertyHealthData : public Entity::PhysicsPropertyRelationPropertyData {
        Float32 Health; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(MaterialPropertyHealthData) == 0x28);
}
#pragma pack(pop)