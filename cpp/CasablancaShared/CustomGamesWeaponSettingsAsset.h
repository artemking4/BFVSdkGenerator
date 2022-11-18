// Object: CustomGamesWeaponSettingsAsset
// ClassId: 239
// RuntimeId: 43469
// TypeInfo: 0x0000000144D2B1A0
#include "../Core/Asset.h"
#include "../CasablancaShared/CustomGamesWeaponSetting.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CustomGamesWeaponSettingsAsset : public Core::Asset {
        Array<CasablancaShared::CustomGamesWeaponSetting> WeaponSettings; // 0x20
    }; // 0x28
    static_assert(sizeof(CustomGamesWeaponSettingsAsset) == 0x28);
}
#pragma pack(pop)