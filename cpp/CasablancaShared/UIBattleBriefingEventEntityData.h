// Object: UIBattleBriefingEventEntityData
// ClassId: 3608
// RuntimeId: 19112
// TypeInfo: 0x0000000144D21470
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIBattleBriefingEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean IsAttacker; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(UIBattleBriefingEventEntityData) == 0x28);
}
#pragma pack(pop)