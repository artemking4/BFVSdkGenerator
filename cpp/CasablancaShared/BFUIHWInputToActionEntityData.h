// Object: BFUIHWInputToActionEntityData
// ClassId: 2281
// RuntimeId: 40427
// TypeInfo: 0x0000000144D87820
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/EntryInputActionMapsData.h"
#include "../GameShared/InputDeviceAxes.h"
#include "../GameShared/InputDevicePadButtons.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../GameShared/InputActionMapSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIHWInputToActionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        GameShared::EntryInputActionMapsData InputActionMap; // 0x28
        GameShared::InputDeviceAxes PadAxis; // 0x30
        GameShared::InputDevicePadButtons PadButton; // 0x34
        Int32 ButtonConfiguration; // 0x38
        Int32 StickConfiguration; // 0x3C
        GameShared::InputActionMapSlot SlotOverride; // 0x40
        Boolean UseRemoteDevice; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(BFUIHWInputToActionEntityData) == 0x48);
}
#pragma pack(pop)