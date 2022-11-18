// Object: StatEventTriggerEntityData
// ClassId: 3517
// RuntimeId: 7851
// TypeInfo: 0x0000000144DC7A80
#include "../Entity/EntityData.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"
#include "../DicePersistenceShared/StatEventData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatEventTriggerEntityData : public Entity::EntityData {
        DicePersistenceShared::PersistenceContextObject TargetContext; // 0x20
        DicePersistenceShared::StatEventData Event; // 0x28
    }; // 0x30
    static_assert(sizeof(StatEventTriggerEntityData) == 0x30);
}
#pragma pack(pop)