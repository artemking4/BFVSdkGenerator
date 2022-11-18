// Object: VeniceVehicleCustomizationAsset
// ClassId: 332
// RuntimeId: 61302
// TypeInfo: 0x0000000144D5C9E0
#include "../GameShared/VehicleCustomizationAsset.h"
#include "../CasablancaShared/VehicleCategory.h"
#include "../CasablancaShared/VehicleClassAsset.h"
#include "../Global/CString.h"
#include "../CasablancaShared/SpecializationTreeAsset.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../CasablancaShared/BFCustomizationUnlockParts.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/VehicleDefinitionItem.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VeniceVehicleCustomizationAsset : public GameShared::VehicleCustomizationAsset {
        CasablancaShared::VehicleCategory Category; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::VehicleClassAsset Class; // 0x38
        CString VehicleClassId; // 0x40
        CString VehicleBlueprintBundleName; // 0x48
        CasablancaShared::SpecializationTreeAsset SpecializationTree; // 0x50
        Array<GameShared::UnlockAssetBase> SpecializationTreeUnlocks; // 0x58
        Array<CasablancaShared::BFCustomizationUnlockParts> VisualParts; // 0x60
        Array<CasablancaShared::BFCustomizationUnlockParts> WeaponParts; // 0x68
        Int32 DefaultVehicleIndex; // 0x70
        char pad_0x74[0x4];
        Array<CasablancaShared::VehicleDefinitionItem> VehicleDefinitions; // 0x78
        CString NameSid; // 0x80
        CString ResourceName; // 0x88
        Int32 SpacerIndex; // 0x90
        char pad_0x94[0x4];
        CString KitOverride; // 0x98
        CString License; // 0xA0
        Boolean UseKitOverride; // 0xA8
        char pad_0xA9[0x7];
    }; // 0xB0
    static_assert(sizeof(VeniceVehicleCustomizationAsset) == 0xB0);
}
#pragma pack(pop)