// Object: WeaponMaterialPropertyData
// ClassId: 4268
// RuntimeId: 36162
// TypeInfo: 0x0000000144F79EE0
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponMaterialPropertyData : public Entity::PhysicsMaterialRelationPropertyData {
        Float32 Hardness; // 0x20
        Float32 HardnessRandomness; // 0x24
        Float32 RicochetOutAngleRandomness; // 0x28
        Float32 RicochetRandomOutAngleVelocityMultiplier; // 0x2C
    }; // 0x30
    static_assert(sizeof(WeaponMaterialPropertyData) == 0x30);
}
#pragma pack(pop)