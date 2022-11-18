// Object: TournamentSettings
// ClassId: 5033
// RuntimeId: 21311
// TypeInfo: 0x0000000144D226F0
#include "../Core/SystemSettings.h"
#include "../CasablancaShared/TournamentStatsReport.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TournamentSettings : public Core::SystemSettings {
        CasablancaShared::TournamentStatsReport EndOfGameReport; // 0x20
        Int32 NumberOfRounds; // 0x28
        Int32 RoundsRequiredForWinning; // 0x2C
    }; // 0x30
    static_assert(sizeof(TournamentSettings) == 0x30);
}
#pragma pack(pop)