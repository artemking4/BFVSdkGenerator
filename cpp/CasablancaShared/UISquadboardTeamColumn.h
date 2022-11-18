// Object: UISquadboardTeamColumn
// ClassId: 5529
// RuntimeId: 36538
// TypeInfo: 0x0000000144D44150
#include "../Core/DataContainer.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/UISquadboardGroup.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISquadboardTeamColumn : public Core::DataContainer {
        GameShared::TeamId TeamId; // 0x18
        Int32 Kills; // 0x1C
        Int32 Score; // 0x20
        Int32 SlotsTaken; // 0x24
        Int32 SlotsTotal; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::UISquadboardGroup> Groups; // 0x30
        Int32 PlayerGroup; // 0x38
        Boolean IsPlayerInTeam; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(UISquadboardTeamColumn) == 0x40);
}
#pragma pack(pop)