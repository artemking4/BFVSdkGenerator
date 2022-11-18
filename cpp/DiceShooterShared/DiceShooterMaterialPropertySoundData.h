// Object: DiceShooterMaterialPropertySoundData
// ClassId: 4252
// RuntimeId: 37530
// TypeInfo: 0x0000000144DE8A90
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class DiceShooterMaterialPropertySoundData : public Entity::PhysicsMaterialRelationPropertyData {
        Float32 ReflectionCoefficient; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(DiceShooterMaterialPropertySoundData) == 0x28);
}
#pragma pack(pop)