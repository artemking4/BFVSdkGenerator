// Object: BFUICustomizationSlotToWeaponSlotEntityData
// ClassId: 2179
// RuntimeId: 56858
// TypeInfo: 0x0000000144D4C370
#include "../Entity/EntityData.h"
#include "../CasablancaShared/CustomizationSlotType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICustomizationSlotToWeaponSlotEntityData : public Entity::EntityData {
        CasablancaShared::CustomizationSlotType SlotType; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUICustomizationSlotToWeaponSlotEntityData) == 0x28);
}
#pragma pack(pop)