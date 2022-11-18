// Object: GameReportTeamCounterEntityData
// ClassId: 2780
// RuntimeId: 29446
// TypeInfo: 0x0000000144C33AF0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class GameReportTeamCounterEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        char pad_0x24[0x4];
        CString CounterName; // 0x28
        Int32 CounterValue; // 0x30
        Boolean Enabled; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(GameReportTeamCounterEntityData) == 0x38);
}
#pragma pack(pop)