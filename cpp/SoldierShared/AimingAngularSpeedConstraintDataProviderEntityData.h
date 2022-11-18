// Object: AimingAngularSpeedConstraintDataProviderEntityData
// ClassId: 2036
// RuntimeId: 39856
// TypeInfo: 0x0000000144F3A110
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../SoldierShared/AimingAngularSpeedConstraintData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class AimingAngularSpeedConstraintDataProviderEntityData : public Entity::EntityData {
        Int32 ConstraintPriority; // 0x20
        SoldierShared::AimingAngularSpeedConstraintData AimingAngularSpeedConstraints; // 0x24
        Float32 YawSpeedOverride; // 0x2C
        Float32 PitchSpeedOverride; // 0x30
        Boolean Enabled; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(AimingAngularSpeedConstraintDataProviderEntityData) == 0x38);
}
#pragma pack(pop)