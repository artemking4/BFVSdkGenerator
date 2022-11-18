// Object: TacticalObjectiveEntityData
// ClassId: 3546
// RuntimeId: 45000
// TypeInfo: 0x0000000144E77340
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class TacticalObjectiveEntityData : public Entity::EntityData {
        CString MissionSid; // 0x20
        CString BriefingSidTeam1; // 0x28
        CString BriefingSidTeam2; // 0x30
        Float32 Team1Timer; // 0x38
        Float32 Team2Timer; // 0x3C
    }; // 0x40
    static_assert(sizeof(TacticalObjectiveEntityData) == 0x40);
}
#pragma pack(pop)