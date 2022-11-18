// Object: PersistenceWeaponConfigurations
// ClassId: 627
// RuntimeId: 61533
// TypeInfo: 0x0000000144DA2980
#include "../Core/Asset.h"
#include "../DiceCommonsShared/PatchVersionSettings.h"
#include "../Global/CString.h"
#include "../CasablancaShared/PersistenceWeaponConfiguration.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceWeaponConfigurations : public Core::Asset {
        DiceCommonsShared::PatchVersionSettings PatchVersionSettings; // 0x20
        CString PatchVersion; // 0x28
        Array<CasablancaShared::PersistenceWeaponConfiguration> Configurations; // 0x30
    }; // 0x38
    static_assert(sizeof(PersistenceWeaponConfigurations) == 0x38);
}
#pragma pack(pop)