// Object: UICombatAreaStateEntityData
// ClassId: 3612
// RuntimeId: 58285
// TypeInfo: 0x0000000144D20F70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICombatAreaStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UICombatAreaStateEntityData) == 0x28);
}
#pragma pack(pop)