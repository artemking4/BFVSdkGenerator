// Object: SyncedEventEntityData
// ClassId: 3537
// RuntimeId: 23523
// TypeInfo: 0x0000000144D22A70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SyncedEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean RemoveDuplicateEvents; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(SyncedEventEntityData) == 0x28);
}
#pragma pack(pop)