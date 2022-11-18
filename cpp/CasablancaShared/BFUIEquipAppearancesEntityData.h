// Object: BFUIEquipAppearancesEntityData
// ClassId: 2184
// RuntimeId: 23973
// TypeInfo: 0x0000000144D83220
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEquipAppearancesEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::BFUIFactionObject Faction; // 0x30
        CasablancaShared::BFUIAppearanceInstanceObjectList Appearances; // 0x38
        Boolean SaveAutomatically; // 0x40
        Boolean SaveOnDeinit; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(BFUIEquipAppearancesEntityData) == 0x48);
}
#pragma pack(pop)