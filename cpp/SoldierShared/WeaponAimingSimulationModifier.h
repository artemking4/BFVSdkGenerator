// Object: WeaponAimingSimulationModifier
// ClassId: 5675
// RuntimeId: 4421
// TypeInfo: 0x0000000144F43AB0
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../SoldierShared/SoldierAimingSimulationData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponAimingSimulationModifier : public WeaponShared::WeaponModifierDynamicBase {
        SoldierShared::SoldierAimingSimulationData AimingController; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponAimingSimulationModifier) == 0x28);
}
#pragma pack(pop)