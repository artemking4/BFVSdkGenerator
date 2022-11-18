// Object: MaterialRelationPenetrationData
// ClassId: 4275
// RuntimeId: 59901
// TypeInfo: 0x0000000144E9F8C0
#include "../Entity/PhysicsPropertyRelationPropertyData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialRelationPenetrationData : public Entity::PhysicsPropertyRelationPropertyData {
        Boolean NeverPenetrate; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(MaterialRelationPenetrationData) == 0x28);
}
#pragma pack(pop)