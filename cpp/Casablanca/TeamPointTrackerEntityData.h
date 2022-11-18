// Object: TeamPointTrackerEntityData
// ClassId: 3556
// RuntimeId: 57612
// TypeInfo: 0x0000000144C33B70
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class TeamPointTrackerEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Int32 StartingPoints; // 0x24
        Int32 GoalPoints; // 0x28
        Int32 Points; // 0x2C
        Int32 AlternativePoints; // 0x30
        Int32 StartingAlternativePoints; // 0x34
        Boolean Enabled; // 0x38
        Boolean StopAtLimit; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(TeamPointTrackerEntityData) == 0x40);
}
#pragma pack(pop)