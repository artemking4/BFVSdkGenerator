// Object: CurrentTimeEntityData
// ClassId: 2561
// RuntimeId: 57072
// TypeInfo: 0x0000000144C1D780
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CurrentTimeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean TriggerOnStart; // 0x24
        Boolean UseLocalTime; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(CurrentTimeEntityData) == 0x28);
}
#pragma pack(pop)