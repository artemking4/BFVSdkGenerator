// Object: ReviveTriggerEntityData
// ClassId: 3114
// RuntimeId: 12460
// TypeInfo: 0x0000000144C33470
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ReviveTriggerEntityData : public Entity::EntityData {
        Int32 HealthPercentage; // 0x20
        Boolean Enabled; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(ReviveTriggerEntityData) == 0x28);
}
#pragma pack(pop)