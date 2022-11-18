// Object: VeniceSoldierCustomizationAsset
// ClassId: 330
// RuntimeId: 4076
// TypeInfo: 0x0000000144D5CB60
#include "../SoldierShared/SoldierCustomizationAsset.h"
#include "../CasablancaShared/SoldierArchetypeAsset.h"
#include "../CasablancaShared/PlayerKitCategory.h"
#include "../Global/CString.h"
#include "../GameShared/CustomizationTable.h"
#include "../CasablancaShared/SoldierAffectorCustomization.h"
#include "../CasablancaShared/SoldierAffectorCustomizationListAsset.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/SoldierCustomizationCharacterListAsset.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VeniceSoldierCustomizationAsset : public SoldierShared::SoldierCustomizationAsset {
        CasablancaShared::SoldierArchetypeAsset Archetype; // 0x68
        CasablancaShared::PlayerKitCategory Category; // 0x70
        char pad_0x74[0x4];
        CString KitId; // 0x78
        CString UIKitIconId; // 0x80
        CString ShortName; // 0x88
        CString LongName; // 0x90
        CString PrimaryRole; // 0x98
        CString SecondaryRole; // 0xA0
        GameShared::CustomizationTable ClassSpecializationTable; // 0xA8
        Array<CasablancaShared::SoldierAffectorCustomization> Affectors; // 0xB0
        CasablancaShared::SoldierAffectorCustomizationListAsset AffectorList; // 0xB8
        Uint32 DefaultCharacterIndex; // 0xC0
        char pad_0xC4[0x4];
        CasablancaShared::SoldierCustomizationCharacterListAsset CharacterList; // 0xC8
        Array<GameShared::UnlockAssetBase> AdditionalWeaponUnlocks; // 0xD0
        Array<GameShared::UnlockAssetBase> PVEUnlocks; // 0xD8
    }; // 0xE0
    static_assert(sizeof(VeniceSoldierCustomizationAsset) == 0xE0);
}
#pragma pack(pop)