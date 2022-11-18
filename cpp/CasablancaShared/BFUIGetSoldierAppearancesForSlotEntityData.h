// Object: BFUIGetSoldierAppearancesForSlotEntityData
// ClassId: 2242
// RuntimeId: 41325
// TypeInfo: 0x0000000144D857A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierClassObject.h"
#include "../CasablancaShared/UISoldierAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSoldierAppearancesForSlotEntityData : public Entity::EntityData {
        CasablancaShared::BFUISoldierClassObject SoldierClass; // 0x20
        CasablancaShared::UISoldierAppearanceSlot Slot; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(BFUIGetSoldierAppearancesForSlotEntityData) == 0x30);
}
#pragma pack(pop)