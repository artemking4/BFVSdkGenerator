// Object: WeaponDeployTimeModifier
// ClassId: 5671
// RuntimeId: 32433
// TypeInfo: 0x0000000144F7A3E0
#include "../WeaponShared/WeaponModifierBase.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponDeployTimeModifier : public WeaponShared::WeaponModifierBase {
        Float32 DeployTime; // 0x20
        Float32 ReactivateCooldownTime; // 0x24
        Float32 DisableZoomOnDeployTime; // 0x28
        Float32 DisableZoomOnAltDeployTime; // 0x2C
        Float32 DisableZoomOnAutomaticSwitchbackDeployTime; // 0x30
        Float32 AltDeployTime; // 0x34
        Float32 DeployTimeForAutomaticSwitchback; // 0x38
        Int32 AltDeployId; // 0x3C
    }; // 0x40
    static_assert(sizeof(WeaponDeployTimeModifier) == 0x40);
}
#pragma pack(pop)