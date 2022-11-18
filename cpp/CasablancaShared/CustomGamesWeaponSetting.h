// Object: CustomGamesWeaponSetting
// ClassId: 1481
// RuntimeId: 65141
// TypeInfo: 0x0000000144D2B0A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/WeaponCategorySetting.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UnlockDependency.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CustomGamesWeaponSetting : public Core::DataContainer {
        CasablancaShared::WeaponCategorySetting Dependency; // 0x18
        CasablancaShared::WeaponCategorySetting InvertedDependency; // 0x1C
        Array<CasablancaShared::UnlockDependency> AdditionalDependencies; // 0x20
        Array<Guid> WeaponUnlockGuids; // 0x28
        Array<Guid> IncompatibleWeaponUnlockGuids; // 0x30
        Boolean ForceRemoveOnSpawnIfDisabled; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(CustomGamesWeaponSetting) == 0x40);
}
#pragma pack(pop)