// Object: WeaponDeploySpeedModifier
// ClassId: 5670
// RuntimeId: 53579
// TypeInfo: 0x0000000144F42E30
#include "../WeaponShared/WeaponModifierBase.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponDeploySpeedModifier : public WeaponShared::WeaponModifierBase {
        Float32 UnDeploySpeed; // 0x20
        Float32 DeploySpeed; // 0x24
    }; // 0x28
    static_assert(sizeof(WeaponDeploySpeedModifier) == 0x28);
}
#pragma pack(pop)