// Object: BFUIEquipAppearanceEntityData
// ClassId: 2182
// RuntimeId: 39899
// TypeInfo: 0x0000000144D832A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"
#include "../CasablancaShared/UISoldierAppearanceSlot.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEquipAppearanceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::BFUIBodyInstanceObject Body; // 0x30
        CasablancaShared::UISoldierAppearanceSlot Slot; // 0x38
        char pad_0x3C[0x4];
        CasablancaShared::BFUIAppearanceInstanceObject Appearance; // 0x40
        Boolean SaveAutomatically; // 0x48
        Boolean SaveOnDeinit; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(BFUIEquipAppearanceEntityData) == 0x50);
}
#pragma pack(pop)