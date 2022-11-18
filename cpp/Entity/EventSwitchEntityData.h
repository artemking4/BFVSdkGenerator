// Object: EventSwitchEntityData
// ClassId: 2724
// RuntimeId: 19140
// TypeInfo: 0x0000000144EE5750
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class EventSwitchEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 OutEvents; // 0x24
        Boolean AutoIncrement; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(EventSwitchEntityData) == 0x30);
}
#pragma pack(pop)