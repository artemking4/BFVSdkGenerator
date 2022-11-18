// Object: EventGateEntityData
// ClassId: 2717
// RuntimeId: 56558
// TypeInfo: 0x0000000144EE44D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Entity {
    class EventGateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean DefaultOpen; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(EventGateEntityData) == 0x28);
}
#pragma pack(pop)