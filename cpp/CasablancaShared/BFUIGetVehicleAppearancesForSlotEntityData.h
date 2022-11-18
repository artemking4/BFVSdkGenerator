// Object: BFUIGetVehicleAppearancesForSlotEntityData
// ClassId: 2265
// RuntimeId: 17890
// TypeInfo: 0x0000000144D85820
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetVehicleAppearancesForSlotEntityData : public Entity::EntityData {
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x20
        CasablancaShared::UIVehicleAppearanceSlot Slot; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(BFUIGetVehicleAppearancesForSlotEntityData) == 0x30);
}
#pragma pack(pop)