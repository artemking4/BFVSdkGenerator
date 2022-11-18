// Object: BFUIVehicleAppearanceSlotFilterEntityData
// ClassId: 2204
// RuntimeId: 56875
// TypeInfo: 0x0000000144D81520
#include "../CasablancaShared/BFUIFilterEntityBaseData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"
#include "../CasablancaShared/BFUIVehicleAppearanceSlotObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleAppearanceSlotFilterEntityData : public CasablancaShared::BFUIFilterEntityBaseData {
        Core::Realm Realm; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::UIVehicleAppearanceSlot> IncludeVehicleAppearanceSlots; // 0x30
        Array<CasablancaShared::UIVehicleAppearanceSlot> ExcludeVehicleAppearanceSlots; // 0x38
        CasablancaShared::BFUIVehicleAppearanceSlotObjectList In; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUIVehicleAppearanceSlotFilterEntityData) == 0x48);
}
#pragma pack(pop)