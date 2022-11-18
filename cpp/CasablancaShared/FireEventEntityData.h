// Object: FireEventEntityData
// ClassId: 2741
// RuntimeId: 55472
// TypeInfo: 0x0000000144D4BBF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Entity/UpdatePass.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FireEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Entity::UpdatePass UpdatePass; // 0x24
    }; // 0x28
    static_assert(sizeof(FireEventEntityData) == 0x28);
}
#pragma pack(pop)