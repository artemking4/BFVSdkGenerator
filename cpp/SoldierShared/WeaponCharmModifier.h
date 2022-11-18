// Object: WeaponCharmModifier
// ClassId: 5667
// RuntimeId: 3803
// TypeInfo: 0x0000000144F44730
#include "../WeaponShared/WeaponModifierBase.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../SoldierShared/WeaponCharmSettingsAsset.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class WeaponCharmModifier : public WeaponShared::WeaponModifierBase {
        Core::Vec3 CharmPosition; // 0x20
        Float32 CharmCollisionPlanePositionX; // 0x30
        char pad_0x34[0x4];
        SoldierShared::WeaponCharmSettingsAsset CharmSpecificSettingsAsset; // 0x38
    }; // 0x40
    static_assert(sizeof(WeaponCharmModifier) == 0x40);
}
#pragma pack(pop)