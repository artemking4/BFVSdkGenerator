// Object: CatalogWeaponAsset
// ClassId: 203
// RuntimeId: 25126
// TypeInfo: 0x0000000144D648F0
#include "../Core/Asset.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"
#include "../CasablancaShared/CatalogWeaponPartAsset.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/CatalogGameType.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/CatalogRarityType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogWeaponAsset : public Core::Asset {
        SoldierShared::SoldierWeaponUnlockAsset WeaponUnlock; // 0x20
        Array<CasablancaShared::CatalogWeaponPartAsset> WeaponParts; // 0x28
        CasablancaShared::CatalogGameType GameType; // 0x30
        char pad_0x34[0x4];
        CString UnlockRequirement; // 0x38
        Int32 UnlockValue; // 0x40
        char pad_0x44[0x4];
        CString StartDate; // 0x48
        CasablancaShared::CatalogRarityType Rarity; // 0x50
        Boolean AlwaysAvailable; // 0x54
        Boolean IsProgressable; // 0x55
        Boolean AvailableOffline; // 0x56
        Boolean AvailableInArmory; // 0x57
    }; // 0x58
    static_assert(sizeof(CatalogWeaponAsset) == 0x58);
}
#pragma pack(pop)