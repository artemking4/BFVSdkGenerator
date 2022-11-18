// Object: AimingWorldLockEfficiencyEntityData
// ClassId: 2040
// RuntimeId: 23090
// TypeInfo: 0x0000000144D6CE30
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../SoldierShared/AimingWorldSpaceLockEfficiencyData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AimingWorldLockEfficiencyEntityData : public Entity::EntityData {
        Int32 EfficiencyPriority; // 0x20
        SoldierShared::AimingWorldSpaceLockEfficiencyData AimingWorldSpaceLockEfficiency; // 0x24
        Float32 OverrideYawEfficiency; // 0x34
        Float32 OverridePitchEfficiency; // 0x38
        Float32 OverrideYawEfficiencyZoom; // 0x3C
        Float32 OverridePitchEfficiencyZoom; // 0x40
        Boolean Enabled; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(AimingWorldLockEfficiencyEntityData) == 0x48);
}
#pragma pack(pop)