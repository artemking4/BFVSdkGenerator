// Object: DamageTypeCompareEntityData
// ClassId: 2599
// RuntimeId: 14381
// TypeInfo: 0x0000000144D436D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../UI/DamageEntityType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DamageTypeCompareEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        UI::DamageEntityType A; // 0x24
        UI::DamageEntityType B; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(DamageTypeCompareEntityData) == 0x30);
}
#pragma pack(pop)