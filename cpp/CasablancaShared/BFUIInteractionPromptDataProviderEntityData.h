// Object: BFUIInteractionPromptDataProviderEntityData
// ClassId: 2844
// RuntimeId: 62343
// TypeInfo: 0x0000000144D9A290
#include "../UIIncubatorShared/LocalizedStringEntityBaseData.h"
#include "../Core/Realm.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIInteractionPromptDataProviderEntityData : public UIIncubatorShared::LocalizedStringEntityBaseData {
        Core::Realm Realm; // 0x30
        char pad_0x34[0x4];
        UIIncubatorShared::LocalizedStringId PickupActionSid; // 0x38
        UIIncubatorShared::LocalizedStringId DefuseActionSid; // 0x40
        UIIncubatorShared::LocalizedStringId EnterVehicleActionSid; // 0x48
        UIIncubatorShared::LocalizedStringId EnterSpecificVehicleActionSid; // 0x50
        UIIncubatorShared::LocalizedStringId WeaponPickupActionSid; // 0x58
        UIIncubatorShared::LocalizedStringId WeaponSwitchActionSid; // 0x60
        UIIncubatorShared::LocalizedStringId InteractActionSid; // 0x68
        UIIncubatorShared::LocalizedStringId ReviveActionSid; // 0x70
        UIIncubatorShared::LocalizedStringId BuddyReviveActionSid; // 0x78
        UIIncubatorShared::LocalizedStringId SupplyAmmoActionSid; // 0x80
        UIIncubatorShared::LocalizedStringId SupplyHealthActionSid; // 0x88
        Float32 ScreenUpdateDelay; // 0x90
        Boolean UseSwitch; // 0x94
        Boolean UseUnlockForSid; // 0x95
        char pad_0x96[0x2];
    }; // 0x98
    static_assert(sizeof(BFUIInteractionPromptDataProviderEntityData) == 0x98);
}
#pragma pack(pop)