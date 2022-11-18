// Object: BFGameplaySettings
// ClassId: 4961
// RuntimeId: 35638
// TypeInfo: 0x0000000144D2B220
#include "../Core/SystemSettings.h"
#include "../CasablancaShared/CustomGamesWeaponSettingsAsset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFGameplaySettings : public Core::SystemSettings {
        CasablancaShared::CustomGamesWeaponSettingsAsset CustomGamesWeaponSettings; // 0x20
        CString OperationsOverallGameModeName; // 0x28
    }; // 0x30
    static_assert(sizeof(BFGameplaySettings) == 0x30);
}
#pragma pack(pop)