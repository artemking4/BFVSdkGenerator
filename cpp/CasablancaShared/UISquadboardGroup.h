// Object: UISquadboardGroup
// ClassId: 5528
// RuntimeId: 4277
// TypeInfo: 0x0000000144D441D0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/UIScoreboardPlayerRow.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISquadboardGroup : public Core::DataContainer {
        CString Name; // 0x18
        Int32 RowNumber; // 0x20
        Int32 Kills; // 0x24
        Int32 Score; // 0x28
        Int32 SlotsTaken; // 0x2C
        Int32 SlotsTotal; // 0x30
        Int32 TeamSlotsTaken; // 0x34
        Int32 TeamSlotsTotal; // 0x38
        char pad_0x3C[0x4];
        Array<CasablancaShared::UIScoreboardPlayerRow> Players; // 0x40
        Boolean IsCommander; // 0x48
        Boolean IsSquad; // 0x49
        Boolean IsUnassigned; // 0x4A
        Boolean IsSummary; // 0x4B
        Boolean IsPlayerInGroup; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(UISquadboardGroup) == 0x50);
}
#pragma pack(pop)