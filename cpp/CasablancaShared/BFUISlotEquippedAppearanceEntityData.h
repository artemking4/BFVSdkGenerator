// Object: BFUISlotEquippedAppearanceEntityData
// ClassId: 2381
// RuntimeId: 62275
// TypeInfo: 0x0000000144D82E20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"
#include "../CasablancaShared/UISoldierAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISlotEquippedAppearanceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::BFUIBodyInstanceObject Body; // 0x30
        CasablancaShared::UISoldierAppearanceSlot Slot; // 0x38
        Boolean UpdateAutomatically; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(BFUISlotEquippedAppearanceEntityData) == 0x40);
}
#pragma pack(pop)