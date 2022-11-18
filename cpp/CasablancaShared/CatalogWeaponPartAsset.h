// Object: CatalogWeaponPartAsset
// ClassId: 204
// RuntimeId: 38457
// TypeInfo: 0x0000000144D64970
#include "../Core/Asset.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../CasablancaShared/WeaponSetAsset.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/CatalogRarityType.h"
#include "../CasablancaShared/CatalogGameType.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogWeaponPartAsset : public Core::Asset {
        GameShared::UnlockAssetBase Unlock; // 0x20
        CasablancaShared::WeaponSetAsset WeaponSet; // 0x28
        CasablancaShared::CatalogRarityType Rarity; // 0x30
        CasablancaShared::CatalogGameType GameType; // 0x34
        CString UnlockRequirement; // 0x38
        Int32 UnlockValue; // 0x40
        char pad_0x44[0x4];
        CString StartDate; // 0x48
        Boolean AlwaysAvailable; // 0x50
        Boolean AvailableOffline; // 0x51
        Boolean IsProgressable; // 0x52
        Boolean AvailableInArmory; // 0x53
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(CatalogWeaponPartAsset) == 0x58);
}
#pragma pack(pop)