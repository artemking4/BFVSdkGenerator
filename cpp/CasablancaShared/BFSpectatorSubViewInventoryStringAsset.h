// Object: BFSpectatorSubViewInventoryStringAsset
// ClassId: 305
// RuntimeId: 6999
// TypeInfo: 0x0000000144CFBA50
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorSubViewInventoryStringAsset : public Core::DataContainerPolicyAsset {
        CString VehiclePrimarySlot; // 0x20
        CString VehicleSecondarySlot; // 0x28
        CString VehicleTertiarySlot; // 0x30
        CString VehicleEquipment1Slot; // 0x38
        CString VehicleEquipment2Slot; // 0x40
        CString VehicleEquipment3Slot; // 0x48
        Uint32 VehiclePrimarySlotHash; // 0x50
        Uint32 VehicleSecondarySlotHash; // 0x54
        Uint32 VehicleTertiarySlotHash; // 0x58
        Uint32 VehicleEquipment1SlotHash; // 0x5C
        Uint32 VehicleEquipment2SlotHash; // 0x60
        Uint32 VehicleEquipment3SlotHash; // 0x64
    }; // 0x68
    static_assert(sizeof(BFSpectatorSubViewInventoryStringAsset) == 0x68);
}
#pragma pack(pop)