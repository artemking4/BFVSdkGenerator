// Object: EventQueueEntityData
// ClassId: 2721
// RuntimeId: 32481
// TypeInfo: 0x0000000144D5B1E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EventQueueEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(EventQueueEntityData) == 0x28);
}
#pragma pack(pop)