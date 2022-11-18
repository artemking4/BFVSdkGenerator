// Object: EventAndGateEntityData
// ClassId: 2715
// RuntimeId: 58050
// TypeInfo: 0x0000000144EE5650
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Entity {
    class EventAndGateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 EventCount; // 0x24
    }; // 0x28
    static_assert(sizeof(EventAndGateEntityData) == 0x28);
}
#pragma pack(pop)