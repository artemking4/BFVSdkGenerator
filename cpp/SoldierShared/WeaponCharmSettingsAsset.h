// Object: WeaponCharmSettingsAsset
// ClassId: 460
// RuntimeId: 48924
// TypeInfo: 0x0000000144F447B0
#include "../Core/DataContainerPolicyAsset.h"
#include "../SoldierShared/WeaponCharmSpecificSettings.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponCharmSettingsAsset : public Core::DataContainerPolicyAsset {
        Array<SoldierShared::WeaponCharmSpecificSettings> CharmSpecificSettings; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponCharmSettingsAsset) == 0x28);
}
#pragma pack(pop)