// Object: MaterialRelationDamageData
// ClassId: 4274
// RuntimeId: 21176
// TypeInfo: 0x0000000144E9F940
#include "../Entity/PhysicsPropertyRelationPropertyData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialRelationDamageData : public Entity::PhysicsPropertyRelationPropertyData {
        Float32 CollisionDamageMultiplier; // 0x20
        Float32 CollisionDamageThreshold; // 0x24
        Float32 DamageProtectionMultiplier; // 0x28
        Float32 DamagePenetrationMultiplier; // 0x2C
        Float32 DamagePenetrationThreshold; // 0x30
        Float32 DamagePenetrationThresholdMultiplier; // 0x34
        Float32 DamageProtectionThreshold; // 0x38
        Float32 ExplosionCoverDamageModifier; // 0x3C
        Float32 ArmorThreshold; // 0x40
        Float32 RepairLimitIncreaseMultiplier; // 0x44
        Float32 RepairLimitDecreaseMultiplier; // 0x48
        Boolean InflictsDemolitionDamage; // 0x4C
        Boolean AllowClientDestruction; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(MaterialRelationDamageData) == 0x50);
}
#pragma pack(pop)