// Object: UISoldierEntityData
// ClassId: 3767
// RuntimeId: 56547
// TypeInfo: 0x0000000144D435D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISoldierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean IsAcceleratingBleedOut; // 0x24
        Boolean IndicateSkipRevive; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(UISoldierEntityData) == 0x28);
}
#pragma pack(pop)