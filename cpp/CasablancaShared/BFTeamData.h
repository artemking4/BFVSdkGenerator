// Object: BFTeamData
// ClassId: 428
// RuntimeId: 4034
// TypeInfo: 0x0000000144D5C660
#include "../GameShared/TeamData.h"
#include "../CasablancaShared/BFFactionId.h"
#include "../Global/CString.h"
#include "../CasablancaShared/VeniceSoldierCustomizationAsset.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/VeniceVehicleCustomizationAsset.h"
#include "../CasablancaShared/VehicleClassAsset.h"
#include "../CasablancaShared/SoldierSlot.h"
#include "../CasablancaShared/VehicleOperatorSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFTeamData : public GameShared::TeamData {
        CasablancaShared::BFFactionId BFFaction; // 0x40
        char pad_0x44[0x4];
        CString ResourceName; // 0x48
        CString FactionNameSID; // 0x50
        CString AbbreviationSID; // 0x58
        Array<CasablancaShared::VeniceSoldierCustomizationAsset> DefaultSoldiers; // 0x60
        Array<CasablancaShared::VeniceVehicleCustomizationAsset> DefaultVehicles; // 0x68
        Array<CasablancaShared::VehicleClassAsset> VehicleSlots; // 0x70
        Array<CasablancaShared::SoldierSlot> SoldierSlots; // 0x78
        Array<CasablancaShared::VehicleOperatorSlot> VehicleOperatorSlots; // 0x80
        Boolean ShareVisualCustomization; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(BFTeamData) == 0x90);
}
#pragma pack(pop)