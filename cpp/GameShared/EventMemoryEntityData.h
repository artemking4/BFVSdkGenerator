// Object: EventMemoryEntityData
// ClassId: 2719
// RuntimeId: 15886
// TypeInfo: 0x0000000144E76E40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace GameShared {
    class EventMemoryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(EventMemoryEntityData) == 0x28);
}
#pragma pack(pop)