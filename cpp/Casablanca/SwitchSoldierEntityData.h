// Object: SwitchSoldierEntityData
// ClassId: 3535
// RuntimeId: 57085
// TypeInfo: 0x0000000144C31AF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SwitchSoldierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean SwitchTeam; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(SwitchSoldierEntityData) == 0x28);
}
#pragma pack(pop)