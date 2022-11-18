// Object: ConditionalStateEntityData
// ClassId: 2534
// RuntimeId: 19328
// TypeInfo: 0x0000000144F6ED40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class ConditionalStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean Condition; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(ConditionalStateEntityData) == 0x28);
}
#pragma pack(pop)