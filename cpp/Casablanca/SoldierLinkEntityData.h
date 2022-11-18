// Object: SoldierLinkEntityData
// ClassId: 3221
// RuntimeId: 51369
// TypeInfo: 0x0000000144C82840
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SoldierLinkEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean UseLocal; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(SoldierLinkEntityData) == 0x28);
}
#pragma pack(pop)