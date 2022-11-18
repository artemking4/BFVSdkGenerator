// Object: VeniceSoldierWeaponCustomizationAsset
// ClassId: 391
// RuntimeId: 47794
// TypeInfo: 0x0000000144D5CA60
#include "../SoldierShared/SoldierWeaponCustomizationAsset.h"
#include "../CasablancaShared/WeaponClassAsset.h"
#include "../CasablancaShared/SpecializationTreeAsset.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../CasablancaShared/BFCustomizationUnlockParts.h"
#include "../CasablancaShared/BFCustomizationUnlockSets.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VeniceSoldierWeaponCustomizationAsset : public SoldierShared::SoldierWeaponCustomizationAsset {
        CasablancaShared::WeaponClassAsset Class; // 0x28
        CasablancaShared::SpecializationTreeAsset SpecializationTree; // 0x30
        Array<GameShared::UnlockAssetBase> SpecializationTreeUnlocks; // 0x38
        Array<CasablancaShared::BFCustomizationUnlockParts> VisualParts; // 0x40
        Array<CasablancaShared::BFCustomizationUnlockSets> VisualSets; // 0x48
        Uint32 GroupingHash; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(VeniceSoldierWeaponCustomizationAsset) == 0x58);
}
#pragma pack(pop)