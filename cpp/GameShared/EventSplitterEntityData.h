// Object: EventSplitterEntityData
// ClassId: 2723
// RuntimeId: 14442
// TypeInfo: 0x0000000144E76DC0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace GameShared {
    class EventSplitterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean RunOnce; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(EventSplitterEntityData) == 0x28);
}
#pragma pack(pop)