// Object: BFUIGetAvailableAppearancesEntityData
// ClassId: 2209
// RuntimeId: 42511
// TypeInfo: 0x0000000144D83720
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"
#include "../CasablancaShared/UISoldierAppearanceSlot.h"
#include "../CasablancaShared/BFUIAppearanceObjectList.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableAppearancesEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::BFUIBodyInstanceObject Body; // 0x30
        CasablancaShared::UISoldierAppearanceSlot Slot; // 0x38
        char pad_0x3C[0x4];
        CasablancaShared::BFUIAppearanceObjectList InAppearances; // 0x40
        Boolean IncludeUnownedObjects; // 0x48
        Boolean ListUnownedObjectsLast; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(BFUIGetAvailableAppearancesEntityData) == 0x50);
}
#pragma pack(pop)