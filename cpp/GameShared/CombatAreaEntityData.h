// Object: CombatAreaEntityData
// ClassId: 2517
// RuntimeId: 34123
// TypeInfo: 0x0000000144E777C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class CombatAreaEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean Invert; // 0x24
        Boolean Enabled; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(CombatAreaEntityData) == 0x28);
}
#pragma pack(pop)