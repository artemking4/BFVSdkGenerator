// Object: UIScoreboardTeamColumn
// ClassId: 5520
// RuntimeId: 62224
// TypeInfo: 0x0000000144D442D0
#include "../Core/DataContainer.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/UIScoreboardPlayerRow.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIScoreboardTeamColumn : public Core::DataContainer {
        GameShared::TeamId TeamId; // 0x18
        Int32 TotalScore; // 0x1C
        Uint32 TotalKills; // 0x20
        Uint32 TotalDeaths; // 0x24
        Uint32 TotalAssists; // 0x28
        Int32 HighestScore; // 0x2C
        Int32 MostKills; // 0x30
        Int32 MostHeadshots; // 0x34
        Int32 MostRevives; // 0x38
        Int32 MostTimesRevived; // 0x3C
        Int32 MostResupplies; // 0x40
        Int32 MostPrisonerOfWar; // 0x44
        Int32 MostCoopKills; // 0x48
        Int32 MostCoopDeaths; // 0x4C
        Int32 MostCoopHeadshots; // 0x50
        Int32 MostCoopRevives; // 0x54
        Int32 MostCoopTimesRevived; // 0x58
        Int32 MostCoopResupplies; // 0x5C
        Array<CasablancaShared::UIScoreboardPlayerRow> Players; // 0x60
    }; // 0x68
    static_assert(sizeof(UIScoreboardTeamColumn) == 0x68);
}
#pragma pack(pop)