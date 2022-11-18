// Object: WeaponCategorizationEntityData
// ClassId: 3913
// RuntimeId: 2328
// TypeInfo: 0x0000000144DA2F80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeaponCategorizationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 WeaponIndex; // 0x24
    }; // 0x28
    static_assert(sizeof(WeaponCategorizationEntityData) == 0x28);
}
#pragma pack(pop)