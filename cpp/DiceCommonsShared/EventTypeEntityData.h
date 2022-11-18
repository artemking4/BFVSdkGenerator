// Object: EventTypeEntityData
// ClassId: 2727
// RuntimeId: 14677
// TypeInfo: 0x0000000144DB5B10
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class EventTypeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(EventTypeEntityData) == 0x28);
}
#pragma pack(pop)